// Q18. Pattern: Pascal's triangle

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int space=1;space<=n-i;space++){
       cout<<" ";
       }
       int val =1;
       for(int a=1;a<=i;a++){
        cout<<val<<" ";
        val=val*(i-a)/a;
       }
       cout<<endl;
    }
    
    return 0;
}