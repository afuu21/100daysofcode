#include<bits/stdc++.h>
using namespace std;

int main() {
    int num,x,lst,fst;
    //20 30 40 ... 90
    //21 34 45 - forty five
    //fst = 82/10 = 8-2 === index number
    //lst = 82%10 = 2

    //eighty two
    string arr1[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    string arr2[9] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundered"};

    while(1) {
    cout<<"Enter a number (0-100) to convert to words: ";
    cin>>num;

    if(num == 100)
        cout<<arr2[8]<<endl;
    else if(num>100 || num<0)
        cout<<"Wrong number choosen!\n";
    else if(num<20)
        cout<<arr1[num]<<endl;
    else if(num%10==0)
        cout<<arr2[num/10-2]<<endl;
    else {
        lst = num%10;
        fst = num/10-2;
        cout<<arr2[fst]<<" "<<arr1[lst]<<endl;
    }
    cout<<"Want to enter more? 1 or 0\n";
    cin>>x;
    if(!x)
        break;
    }
}
