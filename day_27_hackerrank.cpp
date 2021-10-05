#include<iostream>
using namespace std;
int main()
 {
     int grade;
     cin>>grade;
     if((grade+1)%5 == 0 )
        grade = grade+1;
     else if((grade+2)%5 == 0)
        grade = grade + 2;
     cout<<grade;

     return 0;
 }
