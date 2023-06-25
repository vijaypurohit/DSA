/*
https://leetcode.com/problems/design-parking-system/
*/

class ParkingSystem { 
public:
    vector<int> space; // int bigSpace, medSpace, smlSpace;
    ParkingSystem(int big, int medium, int small) {
        space = {big, medium, small};
    }
    
    bool addCar(int carType) {
        if(space[carType-1]>=1){
            space[carType-1] -= 1;
            return true;
        } 
        return false;
         
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */