// Q18. Sort string alphabetically

#include <iostream>
using namespace std;

int main() {
    string str ;
    cout<<"Enter a string: ";
    getline(cin,str);
    int freq[256]={0};

    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }

    for(int i=0;i<=256;i++){
        while(freq[i]>0){
        cout<<(char)i;
        freq[i]--;
    }
    }
    return 0;
}