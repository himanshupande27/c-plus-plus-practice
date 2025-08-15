// Q13.Print all substrings

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a sring: ";
    cin>>str;

    for(int i=0;str.length();i++){
         string temp="";
        for(int j=i;j<str.length();j++){
            temp=temp+string(1,str[j]);
            cout<<temp<<endl;
        }
        
    } 
    return 0;
}