/*
*/

/*
https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/


Firstly sum up the amount of gabages in total.
Second find up the last position for each type.
Calculate the prefix sum array of the travel distance.
Sum up the distance for each type of garbage.
*/

class Solution {
public:
    /*
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        long metaltime=0;
        long papertime=0;
        long glasstime=0;
        
        int n = garbage.size();
        bool findm=false, findg=false, findp=false;
        for(int i=n-1; i>=0; i--)
        {
            int len = garbage[i].size();
            int cntm=0;
            int cntp=0;
            int cntg=0;
            for(int j=0; j<len; j++)
            {
                if(garbage[i][j] == 'M')
                    cntm++;
                else if(garbage[i][j] == 'G')
                    cntg++;
                else if(garbage[i][j] == 'P')
                    cntp++;
            }
            metaltime+=cntm;
            papertime+=cntp;
            glasstime+=cntg;
            
            if(findm)
                metaltime+=travel[i];
            if(findg)
                glasstime+=travel[i];
            if(findp)
                papertime+=travel[i];
            if(cntm>0)
                findm=true;
             if(cntg>0)
                findg=true;
             if(cntp>0)
                findp=true;
        }
        
        return metaltime+papertime+glasstime;
    }
    */
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0;
        int n = garbage.size();
        unordered_map<char, int> last;
        for(int i=0; i<n; i++)
        {
            ans += garbage[i].size();
            for(char &ch: garbage[i])
                last[ch] = i;
        }
        
        partial_sum(begin(travel), end(travel), begin(travel));
        
        for(char ch: "PGM")
        {
            if(last[ch])
                ans+=travel[last[ch]-1];
        }
        
        return ans;
    }//
};