// Q13. Pattern: Number pyramid

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}

