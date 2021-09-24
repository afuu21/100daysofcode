// String is " New york is a city in united states"
#include<iostream>
using namespace std;
int main() {
    string s  = "new york is a city in united states";
    int ct=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            ct++;

    }
    cout<<"The total vowels are: " << ct;
    return 0;
}
