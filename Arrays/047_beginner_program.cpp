// Q16. Check if array is sorted

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" elements for array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;}
    }

    if(count==n-1){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}