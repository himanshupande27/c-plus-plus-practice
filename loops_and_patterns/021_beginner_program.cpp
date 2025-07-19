// Q11.Print prime numbers in a range


#include <iostream>
using namespace std;
int main(){
int n,num=1,count=0;
cout<< "enter a number:";
cin>>n;

while(num<=n)
{count=0;
for (int i=2;i<=num;i++){
    if(num%i==0){
    count++;
          }
        }
        if (count==1){
            cout<<num<<endl;
        }
        num=num+1;
}
    return 0;
}