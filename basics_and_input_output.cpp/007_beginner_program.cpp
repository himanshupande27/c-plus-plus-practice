//Q7. Check if a year is a leap year

#include <iostream>
using namespace std;

int main() {
   int num;
    cout<<"Enter a year "<<endl;
    cin>>num;
    
   if (num%4==0 && num%100!=0 || num%400==0){
    cout<<"it is a leap year"; }
    

  else {
        cout<<"it is not leap year";
    }

    return 0;
}