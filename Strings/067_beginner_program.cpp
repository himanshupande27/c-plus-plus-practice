// Q17. Compress string (like "aaabb" -> "a3b2")

#include <iostream>
using namespace std;

int main() {
    string str ;
    cout<<"Enter a string: ";
    getline(cin,str);
    int freq[256]={0};

    for(int i=0;i<str.length();i++){
        int count=1;
    

    while(i+1<str.length()&&str[i]==str[i+1]){
        count++;
        i++;
    }
    cout<<str[i]<<count;
}
    return 0;
}
    