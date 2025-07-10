// Q5 Find the maximum of 3 numbers

#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   cout<<"enter first number"<<endl;
   cin>>a;
   cout<<"enter second number"<<endl;
   cin>>b;
   cout<<"enter third number"<<endl;
   cin>>c;
   if(a>=b && a>=c){
    cout<<a<< "is the maximum no"<<endl;
   }
   else if(b>=a && b>=c){
    cout<<b<<"is the maximum no"<<endl;
   }
   else {
    cout<<c<<" is the maximum no"<<endl;
   }
    return 0;
}