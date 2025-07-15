// Q7. Count digits of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=0;
    while(n!=0){
        n=n/10;
        i++;
        
    }
    cout<<i;
    return 0;
}