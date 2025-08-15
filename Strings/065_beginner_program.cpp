// Q15. Replace all spaces with '@'

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
       if(str[i]==' '){
        str[i]='@';
       }
    }
    cout<<"After replacing all spaces with '@': "<<str;
    return 0;
}