#include<iostream>
using namespace std;
int main() {
    //arr{1,2,3,4,6,3,2,1,4}
    // 000 110 110
    int x =0;
    int arr[10] = {1,2,3,4,2,3,1,4};
    for(int i : arr)
        x^=i;
    cout<<x;
    return 0;
}
