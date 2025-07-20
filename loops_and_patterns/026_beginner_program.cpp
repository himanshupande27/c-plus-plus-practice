// Q16. Pattern: Inverted  Floyd's triangle

#include <iostream>
using namespace std;

int main() {
    int n,z=n;
    cout<<"enter the number of rows: ";
    cin>>n;
    z=n*(n+1)/2;
    for(int i=n;i>=1;i--){
        for(int a=i;a>=1;a--){
            cout<<z<<" ";
          z--;
            
        }
       cout<<endl;
    } 
    return 0;

}