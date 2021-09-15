#include<bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}


int main() {
    int arr[5] = {1,2,3,6,11};
    int arr_gcd[25];
    int k=0;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            arr_gcd[k] = gcd(arr[i],arr[j]);
            k++;
        }
    }
    sort(arr, arr + 5, greater<int>());
    int sum=0;
    for(int i=0;i<5;i++) {
        sum+=arr[i]*(6-i);
    }
    cout<<sum;
    return 0;
}
