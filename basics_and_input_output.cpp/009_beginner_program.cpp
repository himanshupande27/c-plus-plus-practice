// Q9. Check if a character is a vowel or consonant


#include <iostream>
using namespace std;

char word;
int main() {
    cout << "enter a character"<<endl;
    cin>>word;
if (word=='a'||word=='e'||word=='i'||word=='o'||word=='u'||word=='A'
    ||word=='E'||word=='I'||word=='O'||word=='U'){
    cout<<"charcter is vowel";
}
else{
    cout<<"character is a consonant";
}
    return 0;
}