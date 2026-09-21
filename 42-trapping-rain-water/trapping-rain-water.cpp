class Solution {
public:
    int trap(vector<int>& height) {
        int h = height.size();
        vector<int>leftmaxi(h);
        int lmaxi = -1;
        for(int i=0;i<h;i++)
        {
            lmaxi = max(lmaxi,height[i]);
            leftmaxi[i] = lmaxi;
        }
        vector<int>rightmaxi(h);
        int rmaxi=-1;
        for(int i=h-1;i>=0;i--)
        {
            rmaxi = max(rmaxi,height[i]);
            rightmaxi[i] = rmaxi;
        }
        int water = 0;
        for(int i=0;i<h;i++)
        {
            int mini = min(leftmaxi[i],rightmaxi[i]);
            water +=mini-height[i];
        }
        return water;
    
    }
};