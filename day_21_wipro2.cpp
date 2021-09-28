#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> m1;
    string x;
    getline(cin, x);
    int ff;
    cin>>ff;
    string word;
    stringstream iss(x);
    while(iss>>word) {
        m1[word]++;
        if(m1[word] == ff) {
            cout<<word<<" ";
            m1[word] = 0;
        }
    }
    return 0;
}
