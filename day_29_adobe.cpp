#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,y,ct=0;
    cin>>x>>y;
    for(int i=x; i<=y; i++)
        if(i%x==0)
        ct++;
    cout<<ct;
    return 0;
}
