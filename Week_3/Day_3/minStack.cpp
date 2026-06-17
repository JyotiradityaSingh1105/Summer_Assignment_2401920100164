#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {}
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }
    void pop() {
        if (st.top() == minSt.top())
            minSt.pop();

        st.pop();
    }
    int top() {
        return st.top();
    }
    int getMin() {
        return minSt.top();
    }
};

int main() {
    MinStack ms;
    ms.push(5);
    ms.push(3);
    ms.push(7);
    cout << "Minimum: " << ms.getMin() << endl; 
    ms.pop();
    cout << "Top: " << ms.top() << endl;      
    cout << "Minimum: " << ms.getMin() << endl; 
    return 0;
}