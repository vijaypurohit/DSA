/*
https://leetcode.com/problems/best-team-with-no-conflicts/
*/
/*
In this train of thought, we first look at all information that is available to us. We are given 2 arrays of scores and age and the problem suggests that it has something to do with ordering w.r.t ages.
The word ordering quickly suggests that we can sort the input based on ages. 
But what kind of sort ? Ascending or Descending ? 

Now reformulate the problem statement saying,
given one array (HERE Scores array) and we can choose any number of elements in the order from LEFT to RIGHT Sequence S, PROVIDED that the sequence of elements I pick are non-decreasing and maximise sum(s).

These constraints give us answers to the following questions:
1. What solutions are admissible ?
2. What data type should I be using to store my answer ?
 
https://leetcode.com/problems/best-team-with-no-conflicts/discuss/909417/I-understand-the-solution-but-HOW-do-I-think-to-GET-there-myself-Explanation-and-Solution-O(n2)
*/

class Solution { 
    // struct person{
    //   int age, score;  
    // };
public:
    int n;
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        n = scores.size();
        vector<pair<int,int>> person(n);
    
        for(int i=0; i<n; i++)
            person[i] = {ages[i], scores[i]};
        sort(person.begin(),person.end());
        
        // return findMaxScoreDP(person);
        
        memo.resize(n, vector<int>(n, -1));
        return findMaxScoreRec(-1, 0, person);
    }
    
    int findMaxScoreDP(vector<pair<int,int>>& person)
    {
        //we need to find the highest sum of a non-decreasing subsequence of scores in the list
        vector<int> dp(n, 0); //dp[i] max score possible by taking ith player and possible players before it.
        int ans=0;
        for(int i=0; i<n; i++)
        {
            dp[i] = person[i].second;// initially will be equal to the score of individual players
            for(int j=0; j<i; j++)
            {
                if(person[j].second <= person[i].second && dp[j] + person[i].second > dp[i])
                    dp[i] = dp[j] + person[i].second;
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
    
    vector<vector<int>> memo;
    int findMaxScoreRec(int prev, int idx, vector<pair<int,int>>& person)
    {
        if(idx>=n) //iterated all players
            return 0;
        if(memo[prev+1][idx] != -1)
            return memo[prev+1][idx];
        
        
        //if we can add - two choice -  not add and add
        if(prev == -1 or person[prev].second <= person[idx].second)
                return memo[prev+1][idx] = max(findMaxScoreRec(prev, idx + 1,person), findMaxScoreRec(idx, idx+1,person) + person[idx].second) ;      
        //can't be added, go to next
        return memo[prev+1][idx] = findMaxScoreRec(prev, idx + 1,person);
    }
    
};