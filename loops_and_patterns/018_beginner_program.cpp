// Q18. Reverse a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int rev=0;
    while(n!=0)
    {
       int digit =n%10;
       rev=rev*10+digit;
       n=n/10;
    }
    cout<<"Reverse numbers :"<<rev<<endl;
    
    return 0;
}