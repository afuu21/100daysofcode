#include<iostream>
using namespace std;
int main() {
    int n = 31;
    if(n&n-1)
        cout<<"No";
    else
        cout<< "Yes";
    return 0;
}
