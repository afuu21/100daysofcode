#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,feet,in,mx=-999,res;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>feet>>in;
        res = feet*12+in;
        if(res>mx)
            mx = res;
    }
    cout<<mx;
    return 0;
}
