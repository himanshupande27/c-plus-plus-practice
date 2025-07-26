// Q1. Input and print array elements

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element no "<<i+1<<" :"<<endl;
        cin>>arr[i];
    }
cout<<"The elements are:"<<endl;
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}