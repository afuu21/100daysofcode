#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, diff;
	cin>>t;
	while(t--) {
	    cin>>a>>b;
	    diff = b-a;
	    if(diff%2 == 0)
	        cout<<diff/2;

	    else
	        cout<<diff/2 + 2;

	    cout<<endl;
	}

	return 0;
}
