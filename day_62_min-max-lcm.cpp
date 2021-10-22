#include <iostream>
using namespace std;

int main() {
    // your code goes here
   int t,a,b,lcm,min=9999, max=-9999;
   cin>>t;
   while(t--) {
   min=9999; max=-9999;
   cin>>a>>b;

   for(int i=a; i<=a*b; i++) {
       for(int j=i+1; j<=a*b; j++) {
           lcm=j;
           while(1) {
            if( lcm%j==0 && lcm%i==0 ) {
                break;
            }
            lcm++;
           }

           if(lcm<min)
           min=lcm;
           if(lcm>max)
           max=lcm;

       }

   }
   cout<<min<<" "<<max<<endl;
   }

   return 0;
}
