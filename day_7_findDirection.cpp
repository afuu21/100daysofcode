#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--) {
	    cin>>x;
	    if(x%4==0)
	    cout<<"North"<<endl;
	    else if(x%4==1)
	    cout<<"East"<<endl;
	    else if(x%4==2)
	    cout<<"South"<<endl;
	    else 
	    cout<<"West\n";
	}
	return 0;
}
