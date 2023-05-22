/*
https://leetcode.com/problems/can-place-flowers/
605. Can Place Flowers

*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int plotted=0;
        for(int i=0; i<size; i++)
        {
            if(flowerbed[i] == 0) // check if current plot is empty
            {
                bool emptyLeftPlot = (i==0) || (flowerbed[i-1] == 0);
                bool emptyRightPlot = (i == size-1) || (flowerbed[i+1] == 0);
                if(emptyLeftPlot and emptyRightPlot){
                    flowerbed[i] = 1;
                    i++; // next plot will definitely not be feasible
                    if(++plotted >= size)
                        return true;
                }
            }
        }
        return plotted >= n;
    }
};