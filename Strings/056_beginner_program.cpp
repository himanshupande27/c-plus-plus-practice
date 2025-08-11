// Q6. Find duplicate characters

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int duplicateCount=0;
    int freq[256]={0};
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    cout<<"Duplicates Characters: ";
    for(int i=0;i<254;i++){
        if(freq[i]>1){
        cout<<(char)i<<" ";
        duplicateCount++;
    }
    }
    if(duplicateCount==0){
        cout<<"None";
    }
    return 0;
}