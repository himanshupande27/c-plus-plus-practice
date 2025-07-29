// Q5. Reverse an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reverse number: ";
    for(int i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
}
    return 0;
}