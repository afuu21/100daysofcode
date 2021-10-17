#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map<int, int> m1;
	int t,r1,r2,r3,r4,r5,res;
	cin>>t;
	while(t--) {
	    cin>>r1>>r2>>r3>>r4>>r5;
	    m1[r1]++;
	    m1[r2]++;
	    m1[r3]++;
	    m1[r4]++;
	    m1[r5]++;

	    res = max(m1[1], m1[2]);

	    if(m1[1]==m1[2])
	    cout<<"DRAW\n";
	    else if(res==m1[1])
	    cout<<"INDIA\n";
	    else
	    cout<<"ENGLAND\n";

	    m1[0]=m1[1]=m1[2]=0;

	}
	return 0;
}
