/*
2383. Minimum Hours of Training to Win a Competition
https://leetcode.com/problems/minimum-hours-of-training-to-win-a-competition/
*/

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int trainEnergy=0;
        int trainExp = 0;
        
        int n = energy.size();
        
        for(int i=0; i<n; i++)
        {
            
            if(initialEnergy <= energy[i]){
                int diff = energy[i]-initialEnergy + 1;
                trainEnergy += diff;
                initialEnergy = initialEnergy+diff;
            }
            
            if(initialExperience <= experience[i]){
                int diff = experience[i]-initialExperience + 1;
                trainExp += diff;
                initialExperience = initialExperience+diff;
            }
            
            // if(initialEnergy > energy[i] and initialExperience > experience[i]) {
            initialEnergy -= energy[i];
            initialExperience+=experience[i]; 
            // }
            
        }
        
        return trainEnergy+trainExp;
    }
};