/*
https://leetcode.com/problems/count-days-spent-together/
*/

class Solution {
    vector<int> daysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dateToDayNumber(string s)
    {
        int m = (s[0]-'0')*10 + (s[1]-'0');
        int d = (s[3]-'0')*10 + (s[4]-'0'); 
        while(--m)
        {
            d += daysInMonth[m]; 
        }
        return d;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        /*
        int a1 = dateToDayNumber(arriveAlice);
        int a2 = dateToDayNumber(leaveAlice);
        int b1 = dateToDayNumber(arriveBob);
        int b2 = dateToDayNumber(leaveBob);
        int ans=0;
        for(int d=1; d<=365; d++)
        {
            if((a1 <= d and d <= a2) and (b1 <= d and d <= b2))
                ans++;
        }
        return ans;
        */
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);
        
        return max(0, dateToDayNumber(end) - dateToDayNumber(start) + 1);
    }
};