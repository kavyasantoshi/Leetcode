class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s1;
        int n = asteroids.size();
        for(int i=0;i<n;i++)
        {
            bool destroy = false;
            if(asteroids[i]<0)
            {
                if(s1.empty()) s1.push(asteroids[i]);
                else {
                    while(!s1.empty() && s1.top()>0 && s1.top()<=abs(asteroids[i]))
                    {
                        if(s1.top()==abs(asteroids[i]))
                        {
                            s1.pop();
                            destroy = true;
                            break;
                        }
                        else
                        {
                            s1.pop();
                        }
                    }
                    if(!destroy && (s1.empty() || s1.top()<0)) s1.push(asteroids[i]);
                }
            }
            else
            {
                s1.push(asteroids[i]);
            }
        }
        vector<int>ans;
        while(!s1.empty())
        {
            ans.push_back(s1.top());
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};