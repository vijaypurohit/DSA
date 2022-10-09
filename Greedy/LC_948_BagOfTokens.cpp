/*
https://leetcode.com/problems/bag-of-tokens/
*/

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();  
//         if(n==0) return 0;
//         if(n==1)
//             return (power >= tokens[0]);
        
//         sort(tokens.begin(), tokens.end());
//         if(power < tokens[0]) return 0;
        
//         int score=0;
//         int l=0, r=n-1;
//         while(l<=r)
//         {
//             // cout<<l<<" "<<r<<" "<<power<<") ";
//             if(power >= tokens[l])
//             {
//                 power -= tokens[l];
//                 score++;
//                 l++;
//             }
//             else if(score>0 and l!=r)
//             {
//                 power += tokens[r];
//                 score--;
//                 r--;
//             }
//             else 
//                 break;
            
//         }
//         return score;
        
        
        sort(tokens.begin(), tokens.end());
        
        int score=0, maxScore=0;
        int l=0, r=n-1;
        while(l<=r)
        {
            // cout<<l<<" "<<r<<" "<<power<<") ";
            if(power >= tokens[l])
            {
                power -= tokens[l];
                score++;
                maxScore = max(maxScore, score);
                l++;
            }
            else if(score>0 )
            {
                power += tokens[r];
                score--;
                r--;
            }
            else 
                break;
            
        }
        return maxScore;
    }//
};