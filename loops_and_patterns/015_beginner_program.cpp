// Q5. Print factorial of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}