#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int n = s.size();

    stack<char> st;
    bool ans = true;
    for(int i=0; i<n; i++) {
        if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
            st.push(s[i]);
        }
        else if(s[i] == '}' && st.top()  == '{') {
            st.pop();
        }
        else if(s[i] == ')' && st.top()  == '(' ) {
            st.pop();
        }
        else if(s[i] == ']' && st.top()  == '[') {
            st.pop();
        } else {
            ans = false;
            break;
        }
    }
    if(!st.empty())
        return false;
    return ans;
}

int main() {
    string s = "{([])}";
    if(isValid(s)) {
        cout<<"Its a valid string";
    } else {
        cout<<"Its not a valid string";
    }
    return 0;
}
