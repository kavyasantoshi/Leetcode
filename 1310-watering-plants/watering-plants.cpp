class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int pond = capacity;
        int steps=0;
        int initial=0;
        for(int i=0;i<n;i++)
        {
            if(plants[i]<=capacity)
            {
                steps+=1;
                initial=i+1;
                capacity-=plants[i];
            }
            else
            {
                steps+=initial;
                capacity=pond;
                steps+=initial+1;
                initial = i+1;
                capacity-=plants[i];
                
            }
        }
        return steps;
    }
};