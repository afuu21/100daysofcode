#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i=1; i<=2*n-1; i++) {
        if(i<=n)
        for(int j=0; j<i; j++) {
            cout<<"* ";
        } else {
        for(int j=0; j<2*n-i; j++) {
            cout<<"* ";
        }
        }
        cout<<endl;
    }
    return 0;
}
