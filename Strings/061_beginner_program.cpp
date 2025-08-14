// Q11. Find frequency of characters

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

    for(int i=0;i<=str.length();i++){
        if(str[i]==' ')
        continue;
        char ch=str[i];
        if(freq[ch]>0){
        cout<<ch<<" repeat "<<freq[ch]<<" times."<<endl;
        freq[ch]=0;
    }
    }
    return 0;
}