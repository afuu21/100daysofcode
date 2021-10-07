#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[6] = {900, 940, 950, 1100, 1500, 1800};
    int dep[6] = {910, 1200, 1120, 1130, 1900, 2000};

    //1. Sort the array
    sort(arr, arr+6);
    sort(dep, dep+6);

    /* After sorting
    int arr[6] = {0900, 940, 950, 1100, 1500, 1800};
    int dep[6] = {0910, 1120, 1130, , 1200, 1900, 2000};
    */
    //2. Maintain a max train
    int i=0; //pointing to arrival time
    int j=0; //pointing to departure time

    int maxTrain = 0;
    int platform = 0;

    while(i < 6 && j < 6) {
        if(arr[i] <= dep[j]) {
            maxTrain++;
            i++;
        } else {
            maxTrain--;
            j++;
        }
        platform = max(maxTrain, platform);
    }

    cout<<platform;
    return 0;
}
