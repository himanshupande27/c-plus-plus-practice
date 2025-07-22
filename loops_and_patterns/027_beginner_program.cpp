// Q17. Pattern: 0-1 triangle

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of row: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            if((i+a)%2==0){
                cout<<"1"<<" ";
            }
            else {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}