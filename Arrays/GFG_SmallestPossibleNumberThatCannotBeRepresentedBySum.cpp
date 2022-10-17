/*
https://practice.geeksforgeeks.org/problems/smallest-number-subset1220/1
https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1
*/

class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(), array.end());
        long long ans = 1;
        for(int i=0; i<n; i++)
        {
            if(ans < array[i])
                return ans;
            else //if(array[i] <= ans)
                ans += array[i];
        }
        return ans;
    } 
};