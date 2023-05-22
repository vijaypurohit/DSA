/*
https://leetcode.com/problems/boats-to-save-people/
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int ans=0;
        int i=0, j=n-1;
        while(i<=j){
            if(people[i] + people[j] <= limit) // if pairing with lower can be fit in boat
                    i++;
            j--; // one larger person used (alone or with i)
            ans++; // one pair obtained
        }
        return ans;
    }
};