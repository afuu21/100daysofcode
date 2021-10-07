#include<bits/stdc++.h>
using namespace std;

int main() {
    int nge[10];
    stack<int> st;
    for(int n=0; i<=2*n-1; i++) {
        //pop the small elements
        while(!st.empty() && st.top() <= a[i%n])
            st.pop();
        if(i<n) {
            if(!st.empty() == false)
                nge[i] = st.top();
            else
                nge[i] = -1;
        }
        st.push(a[i%n]);
    }
    return 0;
}
