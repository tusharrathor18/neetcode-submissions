class MinStack {
public:
    vector<int> st;
    int t;

    MinStack() {
        t = -1;
    }
    
    void push(int val) {
        st.push_back(val);
        t++;
    }
    
    void pop() {
        st.pop_back();
        t--;
    }
    
    int top() {
        return st[t];
    }
    
    int getMin() {
        int mn = INT_MAX;

        for (int i = 0; i <= t; i++) {
            mn = min(mn, st[i]);
        }

        return mn;
    }
};
