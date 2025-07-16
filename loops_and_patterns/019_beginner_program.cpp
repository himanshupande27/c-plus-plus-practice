// Q9. Check if a number is palindrome

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int original =n;
    int rev=0;
    while(n!=0)
    {
       int digit =n%10;
       rev=rev*10+digit;
       n=n/10;}

       if (original==rev)
       {
        cout<<"yes, number is palindrome";
       }
       else {
        cout<<"no, number is not palindrome";
       }
    
    return 0;
}