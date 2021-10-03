#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,t,i,j,size;
    cin>>n>>t;
    long long arr[n][1000];
    for(i=0;i<t;i++){
        cin>>size;
        for(j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    while(t--) {
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
        
    
    return 0;
}
