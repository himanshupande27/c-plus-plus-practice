// Q5. Check palindrome

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a strings: ";
    cin>>str;
    int n=str.length()-1;
    for(int i=0;i<n;i++){
        if(str[i]!=str[n]){
            cout<<"Its not palindrome";
            return 0;
        }
        n--;
    }
    cout<<"Its palindrome";
    return 0;
}