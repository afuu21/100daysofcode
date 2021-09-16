#include<iostream>
using namespace std;
int main() {
    int n,k,count=0;
    cin>>n>>k;
    while(n!=0) {
        n/=10;
        count++;
    }
    if(count==k)
        cout<<"true";
    else
        cout<<"False";

return 0;
}
