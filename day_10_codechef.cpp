#include<iostream>
using namespace std;
int main()
 {
     int n,s;
     cin>>n>>s;
     int sum = n*(n+1)/2;
     int x = sum-s;
     if(1<=x && x<=n)
        cout<<"Its possible";
     else
        cout<<"Its not possible";
     return 0;
 }
