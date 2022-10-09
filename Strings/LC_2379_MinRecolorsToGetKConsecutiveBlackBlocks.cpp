/*
https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
*/

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int count=0;
        for(int i=0; i<k; i++)
        {
            if(blocks[i] == 'B')
                count++;
        }
        int ans=k-count;
        if(count==k) return ans;

        for(int i=k; i<n; i++)
        {
            if(blocks[i-k]=='B')
                count--;
            if(blocks[i]=='B')
                count++;
            ans = min(ans, k-count);
        }
        return ans;
    }
};