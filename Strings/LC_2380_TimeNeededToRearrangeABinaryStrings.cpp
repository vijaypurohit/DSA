/*
https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string/
2380. Time Needed to Rearrange a Binary String

Ref: 
https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string/discuss/2454884/No-Dp-O(n)-Time-O(1)-space
*/
class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n = s.length();
        // /*
        int ans=0; 
        bool found= true;
        while(found)
        {
            found = false;
            for(int i=1; i<n; )
            {
                if(s[i-1] == '0' and  s[i]=='1')
                {
                    swap(s[i-1], s[i]);
                    found = true;
                    i = i+2;
                }
                else 
                    i = i+1;
            }
            // cout<<s<<"->";
            if(found)ans++;
        }
        
        return ans;
        // */
        
//         int waitingTime = 0;
//         int zeroCnt = 0;
//         int lastOccOfOne = s.find_last_of('1');
//         for(int i=0; i<=lastOccOfOne; i++)
//         {
//             // inc waiting time if we come across 2 conseq 1's
//             if(i>0 and s[i]=='1' and s[i-1]=='1' and zeroCnt>0)
//                 waitingTime++;
//             //dec waiting time if we come across 2 conseq 0's
//             if(i>0 and s[i]=='0' and s[i-1]=='0' and waitingTime>0)
//                 waitingTime--;
//             if(s[i]=='0')
//                 zeroCnt++;
//         }
        
//         return zeroCnt + waitingTime;
    }
};