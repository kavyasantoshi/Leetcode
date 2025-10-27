class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int col = coordinates[0]-97+1;
        int row = coordinates[1];
        if(col%2!=0 && row%2!=0 || col%2==0 && row%2==0)
        {
            return false;
        }
        return true;
    }
};