// Q7.  Remove all spaces

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    int j=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if (str[i]!=' '){
            cout<<str[i];
        }
    }
    
    return 0;
}