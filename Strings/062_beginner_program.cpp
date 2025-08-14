// Q12. Check anagram

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string str1;
    cout<<"Enter a string 2: ";
    getline(cin,str1);

    if(str.length()!=str1.length()){
        cout<<"it is not angaram";
        return 0;
    }

    int freq[256]={0};
    int count=0;

    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }

    for(int i=0;i<str1.length();i++){
        freq[str1[i]]--;
    }

    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            count++;
        }
    }
    
if(count==0){
    cout<<"it is angaram";
}
else{
    cout<<"it is not angaram";
}
    return 0;
}