// Q19. Pattern: Hollow square

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=n;a++){
             if (i==1||a==1||i==n||a==n){
        cout<<"* ";}
        else{
         cout<<"  ";}
        }
        cout<<endl;
        
    }
    return 0;
}