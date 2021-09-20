#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3, x = 4, index;
    for(int i=0;i<7;i++) {
        if(arr[i] == 4) {
            index = i;
        }
    }

    for(int i=1; k!=0; i++) {
        if(k!=0) {
            cout<<arr[index-i]<<" ";
            k--;
        }
        if(k!=0) {
            cout<<arr[index+i]<<" ";
            k--;
        }
    }
    return 0;
}
