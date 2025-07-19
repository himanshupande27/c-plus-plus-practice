// Pattern: Right-angled triangle *

#include <iostream>
using namespace std;

int main() 
{
    int n,a=1; 
    cout<<"Enter a number: ";
    cin>>n;
    while(a<=n){
    for(int i=1;i<=a;i++){
    cout<<"*";
    }
    cout<<endl;
    a++;
    }

    return 0;
}