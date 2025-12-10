class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        else if(n>=19 && n<27 || n>=34 && n<40 || n>=45 && n<49)
        {
            return false;
        }
        return true;
    }
};