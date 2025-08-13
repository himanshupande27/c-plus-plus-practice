// Q10. Find length without strlen()

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a strings: ";
    getline(cin,str);
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<count;
}