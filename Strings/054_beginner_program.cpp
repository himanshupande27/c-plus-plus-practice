// Q4. Reverse a string

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a name in string:";
    cin>>str;
    int n=str.length();
    cout<<"Reverse String: ";
    for (int i=n-1;i>=0;i--){
    cout<<str[i];
    }
    return 0;
}