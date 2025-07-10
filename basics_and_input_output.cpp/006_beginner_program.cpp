// Q6. Simple calculator using switch-case

#include <iostream>
using namespace std;

int main() {
    char a;
    float num1,num2;
    cout<<"choose any operator"<<endl;
    cin>>a;
     cout<<"enter no 1"<<endl;
     cin>>num1;
     cout<<"enter no 2"<<endl;
     cin>>num2;
     
    switch(a)
    {
         case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case '/':
        if(num2!=0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
    else {
        cout<<num1<<"/"<<num2<<"=infinity";
    }
        break;
        default:
        cout<<"invalid operation";
    }
    return 0;
}