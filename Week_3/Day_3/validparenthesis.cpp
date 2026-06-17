#include <iostream>
#include <stack>
using namespace std;

bool Validparenthesis(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            if (st.empty()) return false;
            if ((ch == ')' && st.top() == '(') ||
                (ch == '}' && st.top() == '{') ||
                (ch == ']' && st.top() == '[')) {
                st.pop();
            } 
            else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (Validparenthesis(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}