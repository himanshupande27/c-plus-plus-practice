// Q10. Check if a number is prime

#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter the number:";
    cin>>n;
    i=1;
    int count=0;
    while(i<n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==1){
        cout<<"It is prime number";
    }
    else{
        cout<<"It is not prime number";
    }
return 0;
}