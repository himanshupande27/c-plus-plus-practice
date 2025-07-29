// Q6. Left/Right rotate array

#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"Enter a number of elements:";
    cin>>n;
    int arr[n];
    
    cout<<"Enter "<<n<<" elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // For left rotation

    arr[n]=arr[0];
    cout<<"Left rotation : ";
    for(int i=1;i<=n;i++){
        
            cout<<arr[i]<<" ";
}
cout<<endl;

// For right rotation 

int temp = arr[n-1];
for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
        }

arr[0]=temp;

cout<<"Right rotation:";

for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
        }
    return 0;
}