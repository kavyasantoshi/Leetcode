class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>result;
        int k = num%3;
        if(k==0)
        {
            result.push_back((num/3)-1);
            result.push_back(num/3);
            result.push_back((num/3)+1);
        }
        return result;
    }
};