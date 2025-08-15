// Q14. Capitalize first letter of each word

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a sring: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[0]>='a' && str[0]<='z'){
            str[0]=str[0]-32;
        }
       if(str[i]>='a' && str[i]<='z'&& str[i-1]==' '){
        str[i]=str[i]-32;
       }
    
    }

    cout<<"After capitalizing first letter of each word : "<<endl<<str;

    return 0;
}