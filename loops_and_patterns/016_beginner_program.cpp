// Q6. Print Fibonacci series

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int n=a+b;
        a=b;
        b=n;
    }
    return 0;
}