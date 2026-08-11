class StockSpanner {
private:
  stack<pair<int,int>>st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int c=1;
        while(!st.empty() && st.top().first<=price)
        {
            c+=st.top().second;
            st.pop();
        }
        if(st.empty() || st.top().first>price)
        {
           st.push({price,c});
        }
        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */