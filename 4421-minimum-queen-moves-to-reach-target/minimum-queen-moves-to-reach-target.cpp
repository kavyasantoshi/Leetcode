class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int s1 = source[0];
        int s2 = source[1];
        int d1 = target[0];
        int d2 = target[1];
        if((s1 == d1 && s2==d2) && (s1+s2 == d1+d2))
        { 
            return 0; 
        }
        else if((s2==d2) || (s1==d1) || (s1+s2 == d1+d2) ||(s2-s1)==d2-d1)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
};