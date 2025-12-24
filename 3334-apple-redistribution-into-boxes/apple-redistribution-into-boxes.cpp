class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum+=apple[i];
        }
        int count=0;
        int i=0;
        while(sum>0 && i<m)
        {
            sum-=capacity[i];
            count++;
            i++;
        }
        return count;
    }
};