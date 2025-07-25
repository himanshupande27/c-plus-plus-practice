// Q20. Pattern: Diamond

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
cout<<"*";
}
cout<<endl;
}

// lower traingle

for(int i=1;i<n;i++){
for (int space=1;space<=i;space++){
    cout<<" ";
}
int val=1;
for (int a=1;a<=2*(n-i)-1;a++){
cout<<"*";
}
cout<<endl;
}


return 0;
}