// Q3.  Print multiplication table of a number

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: "; 
    cin>>num;
    for (int i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" ="<<num*i<<endl;
    }
    return 0;
}