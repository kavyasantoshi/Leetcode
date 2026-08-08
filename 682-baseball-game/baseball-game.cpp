class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
           if(operations[i]!="C" && operations[i]!="D" && operations[i]!="+")
           {
              st.push(stoi(operations[i]));
           }
           else if(operations[i]=="C")
           {
             st.pop();
           }
           else if(operations[i]=="D")
           {
             int k = st.top();
             st.push(k*2);
           }
           else
           {
              int a = st.top();
              st.pop();
              int b = st.top();
              st.push(a);
              st.push(a+b);
           }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};