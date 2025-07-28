// Q2.Find min and max element

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    
    for(int i=1;i<=n;i++){
        cout<<"Element no "<<i<<" :"<<endl;
        cin>>num[i];
    }

    int min=num[1],max=num[1];

    for(int i=2;i<=n;i++){
        if(num[i]<min){
            min=num[i];}
        if(num[i]>max){
            max=num[i];
        }
    }
        cout<<"Minimum element:"<<min<<endl;
        cout<<"Maximum element:"<<max<<endl;
return 0;
}