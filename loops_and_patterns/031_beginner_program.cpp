// Q21.  Pattern: Hollow pyramid

#include <iostream>
using namespace std ;

int main(){
int n;
cout<<"enter number of rows: ";
cin>>n;

//upper traingle

for(int i=1;i<=n;i++){
for (int space=1;space<=n-i;space++){
    cout<<" ";
}
for (int a=1;a<=2*i-1;a++){
if(i==1||i==n||a==1||a==2*i-1){
    cout<<"*";
}
else{
    cout<<" ";
}
}
cout<<endl;
}
return 0;
}