#include<bits/stdc++.h>
using namespace std;
int main()
 {
     string s;
     cin>>s;
     int count=0;
    int sum=0;
    int n = s.length();
    for(int i=0;i<n;i++) {
        count++;
        if(s[i] != s[i+1]) {
            if(count%2==0)
            sum+=count;
        count=0;
        }
    }
    cout<<sum;
     return 0;
 }
