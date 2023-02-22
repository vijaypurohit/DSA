/*
https://leetcode.com/problems/non-decreasing-subsequences/
*/
class Solution {
public:
    
/*
observing the constraint to analyse that brute force solution will work
when you need to check the subsequences/combinations/permutations of some group of letters/numbers, the first thought you should have is backtracking. 

*/
    int n;
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n = nums.size();
        set<vector<int>> result;
        vector<int> sequence;
        
        // BackTrackSolution(0, sequence, result, nums);
        // return vector(result.begin(), result.end());
        
        //Using Lambda Function
        
        function<void(int)> backtrack; // declaration
        //calling
        backtrack = [&nums, &sequence, &result, &backtrack](int idx) -> void 
        { 
            if (idx == nums.size()) {
                if (sequence.size() >= 2)result.insert(sequence);
                return;
            } 
            if (sequence.empty() || sequence.back() <= nums[idx]) { 
                sequence.push_back(nums[idx]); 
                backtrack(idx + 1); 
                sequence.pop_back();
            } 
            backtrack(idx + 1); // not picking element 
        };
        
        backtrack(0);
        return vector(result.begin(), result.end());  
    }
    
    
    void BackTrackSolution(int idx, vector<int>& seq, set<vector<int>>& result, vector<int>& nums)
    {
        if(idx == n) // done checking all the elements
        {
            if(seq.size() >= 2) result.insert(seq);
            return ;
        }
        
        if(seq.empty() or seq.back() <= nums[idx]) //picking element
        {
            seq.push_back(nums[idx]);
            BackTrackSolution(idx+1, seq, result, nums);
            seq.pop_back();
        }
        BackTrackSolution(idx+1, seq, result, nums); // not picking element 
    }
    
    
};
