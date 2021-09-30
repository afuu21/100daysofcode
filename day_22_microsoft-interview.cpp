#include<iostream>
#include<math.h>
//n=5 n! = 120
using namespace std;
int main() {
    int x,res=1,sum=0;
    cout<<"Enter a number to find the trailing zeros";
    cin>>x;
    while(pow(5,res)<=x) {
        sum+=x/pow(5,res);
        res++;
    }
    cout<<sum;
    return 0;
}
