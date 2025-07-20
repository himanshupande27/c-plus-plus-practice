// Q14. Pattern: Floyd's triangle

#include <iostream>
using namespace std;

int main() {
    int n,z=1;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            cout<<z<<" ";
            z++;
            
        }
       cout<<endl;
    } 
    return 0;
}
