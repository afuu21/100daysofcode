#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,r,i=0;
    cin>>n;
    char x[5];
    while(n!=0) {
        r = n%10;
        n/=10;
        if(r==0)
            x[i]='a';
        else if(r==1)
            x[i]='b';
        else if(r==2)
            x[i]='c';
        else if(r==3)
            x[i]='d';
        else if(r==4)
            x[i]='e';
        else if(r==5)
            x[i]='f';
        else if(r==6)
            x[i]='g';
        else if(r==7)
            x[i]='h';
        else if(r==8)
            x[i]='i';
        else
            x[i]='j';
        i++;
    }

    string s(x);
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
