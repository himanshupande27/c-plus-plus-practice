// Q8. Count words in string

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int count=1;
    for(int i=0;i<str.length();i++){
       if(str[i]==' '&& str[i-1]!=' '){
        count++;
       }
    }
    cout<<"Number of words in string: "<<count;
    return 0;
}