/*
https://leetcode.com/problems/push-dominoes/
*/
class Solution {
public: 
    int n;
    string pushDominoes(string dominoes) {
        n = dominoes.size();
        // return UsingLeftRightArray(dominoes);
        // return Using2PTR(dominoes);
        string d = 'L' + dominoes + 'R';
        string ans="";
        for(int l=0, r=1; r<n+2; r++)
        {
            if(d[r] == '.')continue;
            int midlen = r-l-1;
            if(l>0)
                ans+=d[l];
            if(d[l] == d[r]) //L ... L  or R..R
                ans += string(midlen, d[l]);
            else if(d[l] == 'L' and d[r] == 'R')
                ans += string(midlen, '.');
            else // R ... L
                ans += string(midlen/2, 'R') + string(midlen%2, '.') + string(midlen/2, 'L');
            l=r;
        }
        return ans;
    }
    
    string Using2PTR(string& s) { 
        int right=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'L') {
                if(right == -1) {
                    for(int j=i-1; j>=0 and s[j]=='.'; --j)
                        s[j] = 'L';
                }
                else
                {
                    for(int j=right+1, k=i-1; j<k; ++j, --k)
                    {
                        s[j] = 'R';
                        s[k] = 'L';
                    }
                    right = -1;
                }
            } //s[i]='L'
            else if(s[i] == 'R')
            {
                if(right!= -1) // R.R.L
                {
                    for(int j=right+1; j<i; ++j)
                        s[j]='R';
                }
                right = i;
            }
        }//for i
        
        if(right != -1)
        {
            for(int j=right+1; j<n; j++)
                s[j] = 'R';
        }
        
        return s;
    }
    
/*
right array -> iterate left to right, check dominoes falling on right side and store distance from the previous R;
similarly for left array

Now from array
* if both arr_i value is zero then copy from dominoes;
* if right is zero but not left, means dominoes fall to left, vice versa
* if both are equal, we have balance of the force, stay vertical;
* if different value, pick min of two means which is closer
*/ 
    
#define SET_ARRAY(ch, arr) if(s[i] == ch)  { cnt=1;  prev = ch; } \
    else if(s[i] != '.') prev = s[i];\
    if(prev == ch and s[i] == '.') arr[i] = cnt++;  
    string UsingLeftRightArray(string &s) {
        // left -> falling count on left, right->falling count on right
        vector<int> left(n, 0), right(n, 0);
        int cnt; char prev;
        for(int i=0; i<n; i++){
            SET_ARRAY('R', right);
        }
        prev='.';
        for(int i=n-1; i>=0; i--){
            SET_ARRAY('L', left);
        }
        // for(int i=0; i<n; i++) cout<<right[i]<<" "; cout<<endl;
        // for(int i=0; i<n; i++) cout<<left[i]<<" "; cout<<endl;
        for(int i=0; i<n; i++)
        {
            if(left[i] == 0 and right[i]==0)
                continue;
            if(left[i]==0)
                s[i]='R'; //fall right
            else if(right[i] == 0)
                s[i] = 'L'; // fall left;
            else if( left[i] == right[i])
                s[i] = '.';
            else if(left[i] < right[i])
                s[i] = 'L';
            else 
                s[i] = 'R';
        }
        return s;
    }
    
};