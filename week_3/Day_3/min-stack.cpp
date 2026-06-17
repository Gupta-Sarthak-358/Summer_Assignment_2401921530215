#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<pair<int, int>> st;

public:
    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            int min_val = min(val, st.top().second);
            st.push({val, min_val});
        }
    }

    void pop() { st.pop(); }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};


int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl; // Returns -3
    minStack.pop();
    cout << minStack.top() << endl;    // Returns 0
    cout << minStack.getMin() << endl; // Returns -2
    return 0;
}