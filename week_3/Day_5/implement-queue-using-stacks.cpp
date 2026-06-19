#include<bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> instack;
    stack<int> outstack;

public:
    MyQueue() {}

    void push(int x) {
        instack.push(x);
    }

    int pop() {
        if(outstack.empty()){
            while(!instack.empty()){
                outstack.push(instack.top());
                instack.pop();
            }
        }

        int val = outstack.top();
        outstack.pop();
        return val;
    }

    int peek() {
        if(outstack.empty()){
            while(!instack.empty()){
                outstack.push(instack.top());
                instack.pop();
            }
        }

        return outstack.top();
    }

    bool empty() {
        return instack.empty() && outstack.empty();
    }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    cout << q.peek() << endl; // returns 1
    cout << q.pop() << endl;  // returns 1
    cout << q.empty() << endl; // returns false
    return 0;
}