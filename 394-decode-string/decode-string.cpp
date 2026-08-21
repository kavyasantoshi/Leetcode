class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=']')
            {
              st.push(s[i]);
            }
            else
            {
                string str;
                while(!st.empty() && st.top()!='[')
                {
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(str.begin(),str.end());
                string numstr;
                while(!st.empty() && isdigit(st.top()))
                {
                    numstr+=st.top();
                    st.pop();
                }
                reverse(numstr.begin(),numstr.end());
                int num = stoi(numstr);
                for(int i=0;i<num;i++)
                {
                   for(char ch:str)
                   {
                     st.push(ch);
                   }
                }
            }
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};