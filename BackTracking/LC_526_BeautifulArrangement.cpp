/*
https://leetcode.com/problems/beautiful-arrangement/
*/

class Solution {
public:
    int count=0;
    int n;
    int countArrangement(int n) {
        this->n = n;
        
        // vector<int> nums(n);
        // for(int i=0; i<n; i++) 
        //     nums[i] = i+1;  
        // permute(0, nums);
        
        if(n<4) return n;
        // vector<bool> visited(n+1, false);
        // calculate(1, visited);
        // return count;
        int seen=0;
        return calculate2(1, seen);
        
    }
    
    int calculate2(int pos, int& mask)
    {
        if(n<4) return n;
        if(pos>n) return count++;
        
        for(int x=1, bit; x<=n; x++)
        {
            bit = 1<<x;
            if(!(mask & bit) and ((x%pos == 0) or (pos%x==0)))
            {
                mask ^= bit;
                calculate2(pos+1, mask);
                mask ^= bit;
            }
        }
        return count;
    }
    
    void calculate(int pos, vector<bool>& visited)
    {
        if(pos>n) {
            count++;
            return;
        }
        for(int x=1; x<=n; x++){
            if(visited[x]==false and ((x%pos == 0) or (pos%x==0)))
            {
                visited[x] = true;
                calculate(pos+1, visited);
                visited[x] = false;
            }
        }
    }
    
    void permute(int l, vector<int> nums)
    {
        if(l ==  n)
        {
            count++;
            return;
        }   
        
        for(int i=l; i<n; i++)
        {
            swap(nums[i], nums[l]);
            if(nums[l] % (l+1) == 0 || (l+1)%nums[l]==0)
                permute(l+1, nums);
            swap(nums[i], nums[l]);
        }
    }
};