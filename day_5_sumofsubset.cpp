#include<bits/stdc++.h>
using namespace std;
int main(){
char res[1000];
bool b = false;
int arr[5] = {2, 3, 6, 12, 14};
int sum;
for(int i=0;i<32;i++) {
    itoa(i,res,2);
    cout<<res<<endl;
    sum=0;
    for(int j=0;j<5;j++) {
        if(res[j] == '1') {
            sum+=arr[j];
        }
    }
    cout<<"sum="<<sum<<endl;
    if(sum==18) {
        b = true;
        break;
    }

}

if(b)
    cout<<"Yes sum is possible";
else
    cout<<"Sum is not possible";

return 0;
}
