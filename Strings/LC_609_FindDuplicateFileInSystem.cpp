/*
https://leetcode.com/problems/find-duplicate-file-in-system/
609. Find Duplicate File in System
*/

/*
Follow up questions:

1. Imagine you are given a real file system, how will you search files? DFS or BFS ?
In general, BFS will use more memory then DFS. 
However BFS can take advantage of the locality of files in inside directories, and therefore will probably be faster
* The memory of BFS is determined by the width of search. The memory of DFS is decided by the depth. Generally on average BFS takes more memory.
* BFS explores neighbors first. This means that files which are located close to each other are also accessed one after another. This is great for space locality and that's why BFS is expected to be faster. Also, BFS is easier to parallelize (more fine-grained locking). DFS will require a lock on the root node.

2. If the file content is very large (GB level), how will you modify your solution?
In a real life solution we will not hash the entire file content, since it's not practical. 
Instead we will first map all the files according to size. Files with different sizes are guaranteed to be different. 
We will than hash a small part of the files with equal sizes (using MD5 for example).
Only if the md5 is the same, we will compare the files byte by byte
* MD5 is definitely one way to hash a file, another more optimal alternative is to use SHA256.
* For very large files we should do the following comparisons in this order:
compare sizes, if not equal, then files are different and stop here!
hash them with a fast algorithm e.g. MD5 or use SHA256 (no collisions found yet), if not equal then stop here!
compare byte by byte to avoid false positives due to collisions.

3. If you can only read the file by 1kb each time, how will you modify your solution?
This won't change the solution. 
We can create the hash from the 1kb chunks, and then read the entire file if a full byte by byte comparison is required.

What is the time complexity of your modified solution? What is the most time consuming part and memory consuming part of it? How to optimize?
Time complexity is O(n^2 * k) since in worse case we might need to compare every file to all others. k is the file size

How to make sure the duplicated files you find are not false positive?
We will use several filters to compare: File size, Hash and byte by byte comparisons.
* Use a bloom filter will lower the false positive rate.
( a bloom filter is just a set of hash functions that map to a set of bits in a bitmap. 
Let's say we use n hash functions in the bloom filter that hash the first few bytes of a file 
into m distinct bits in the bitmap (m <= n as there could be collisions). 
Now if the same set of hash functions when applied to the other file also map to the same m bits in the bitmap 
then there is a high probability that both the files are same. 
But, if even one out of those m bits is different then we are 100% sure the two files are different.)

*/

class Solution {
public:
    /* //intitial solution 
    vector<vector<string>> findDuplicate_1(vector<string>& paths) {
        vector<vector<string>> ans;
        int n = paths.size();
        unordered_map<string, vector<string>> hash;
        
        for(string &p: paths)
        {
            string pathstr="", content="", filename="";
            int len = p.size()-1; //ignoring last ')'
            bool foundContent=false;
            int i=0;
            for( ; p[i] != ' '; i++) // path covering
                pathstr += p[i];
            
            pathstr += '/'; // replacing space with /
            i++;
            
            for( ; i<len; i++)
            {
                if(p[i]==' ')continue;
                if(foundContent==false)
                {
                    if(p[i] != '(')
                        filename += p[i];
                    else
                        foundContent = true;
                }
                else if(p[i] != ')') // if multiple files in a same path, then to detect that.
                {
                    content+=p[i];
                }
                else
                {
                    hash[content].push_back(pathstr+filename);
                    filename=""; content="";
                    foundContent=false;
                }
            } 
            hash[content].push_back(pathstr+filename); // last filename
        }
        
        for(auto &h: hash)
        {
            // cout<<h.first<<"-> "; for(string& x: h.second) cout<<x<<" ";  cout<<endl;
            if(h.second.size()>1)
                ans.push_back(h.second);
        }
        
        return ans;
    }
    */
    
    // custom split template
    vector<string> split(string& input, char delimiter) {
        string line;
        vector<string> tokens;
        stringstream ss(input);
        while (getline(ss, line, delimiter)) 
            tokens.push_back(line);
        return tokens;
    }
     vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> ans;
        int n = paths.size();
        unordered_map<string, vector<string>> hash;
        
        for(string &p: paths)
        {
            vector<string> tokens = split(p, ' ');
            int len = tokens.size();
            string dirPath = tokens[0];
            for(int i=1; i<len; i++)
            {
                int l = tokens[i].find('(');
                int r = tokens[i].find(')');
                string fileName = tokens[i].substr(0, l);
                string fileContent = tokens[i].substr(l+1, r-l-1);
                hash[fileContent].push_back(dirPath+"/"+fileName);
            }
        }
        
        for(auto &h: hash)
        { // cout<<h.first<<"-> "; for(string& x: h.second) cout<<x<<" ";  cout<<endl;
            if(h.second.size()>1) //check if there is duplicate
                ans.push_back(h.second);
        }
        
        return ans;
    }
};