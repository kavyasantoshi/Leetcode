class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();
        unordered_map<int,int>lastseen;
        int mini = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(lastseen.count(cards[i]))
            {
                mini = min(mini,i-lastseen[cards[i]]+1);
            }
            lastseen[cards[i]]=i;
        }
        return mini==INT_MAX?-1:mini;
    }
};