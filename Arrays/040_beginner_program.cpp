// Q9. Remove duplicates from array

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
    cout<<"After removing duplicates from array :";
    for(int i=0;i<n;i++){
        if(arr[i]==-1)
        continue;

        for(int j=0;j<n;j++){
        if (arr[j]==arr[i]){
        if(j!=i)
        arr[j]= -1;
    }
   }
cout<<arr[i]<<" ";
    }
    return 0;
}