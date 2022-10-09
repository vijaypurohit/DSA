/*
https://leetcode.com/problems/excel-sheet-column-number/
https://practice.geeksforgeeks.org/problems/excel-sheet-part-21138/1
*/
/*
"B" = 2
"BC" = (2)26 + 3
"BCM" = (2(26) + 3)26 + 13
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            // int ind = (columnTitle[i]-'A' + 1);
            // ans += pow(26, n-1-i)*ind;
            ans = ans*26 + (columnTitle[i]-'A' + 1);
        }
        return ans;
    }
};