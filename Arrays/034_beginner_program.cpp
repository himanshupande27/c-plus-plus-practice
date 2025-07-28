// Q3. Calculate sum and average

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num[n];

    cout<<"Enter "<<n<<" elements:"<<endl;
    
    for (int i=1;i<=n;i++){
        cout<<"enter no "<<i<<" :";
        cin>>num[i];
    }
    float a=num[1];
    for(int i=2;i<=n;i++){
      a=a+num[i];
     }
     cout<<"Sum = "<<a<<endl;
     cout<<"Average = "<<a/n;
    return 0;
    return 0;
}