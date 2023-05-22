/*
https://leetcode.com/problems/bulb-switcher/
*/
/*
As all the bulbs are initially off, at the end only bulbs that are toggled an odd number of times will remain on.
Now, whenever we are at a round i we know we toggle all bulbs having a factor i.
Thus, we need to find the bulbs which have an odd number of factors, as those bulbs will be toggled an odd number of times (once by each factor).

*/
class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};