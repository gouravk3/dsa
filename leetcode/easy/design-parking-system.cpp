// https://leetcode.com/problems/design-parking-system/
class ParkingSystem {
public: vector<int> track;
public:
    ParkingSystem(int big, int medium, int small) {
        track = {big, medium, small};
    }
    
    bool addCar(int carType) {
        if(carType == 1 && track[0] > 0){
            --track[0];
            return true;
        }
        if(carType == 2 && track[1] > 0){
            --track[1];
            return true;
        }
        if(carType == 3 && track[2] > 0){
            --track[2];
            return true;
        }
        return false;
    }
};


class ParkingSystem {
public: vector<int> track;
public:
    ParkingSystem(int big, int medium, int small) {
        track = {big, medium, small};
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(track[0] > 0){
                --track[0];
                return true;
            }
        }
        else if(carType == 2){
            if(track[1] > 0){
                --track[1];
                return true;
            }
        }
        else if(carType == 3){
            if(track[2] > 0){
                --track[2];
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */