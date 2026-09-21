class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int h = heights.size();
        vector<int>next_small(h);
        stack<pair<int,int>>st;
        for(int i=h-1;i>=0;i--)
        {
            while(!st.empty() && st.top().first>=heights[i])
            {
                 st.pop();
            }
            if(st.empty())
            {
                st.push({heights[i],i});
                next_small[i] = i+(h-i);
            }
            else
            {
                next_small[i] = st.top().second;
                st.push({heights[i],i});
            }
        }
        vector<int>pre_small(h);
        stack<pair<int,int>>stk;
        for(int i=0;i<h;i++)
        {
            while(!stk.empty() && stk.top().first>=heights[i])
            {
                stk.pop();
            }
            if(stk.empty())
            {
                stk.push({heights[i],i});
                pre_small[i]=-1;
            }
            else
            {
                pre_small[i] = stk.top().second;
                stk.push({heights[i],i});
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<h;i++)
        {
            int k = (next_small[i]-pre_small[i])-1;
            ans=max(ans,(k*heights[i]));
        }
        return ans;
    }
};