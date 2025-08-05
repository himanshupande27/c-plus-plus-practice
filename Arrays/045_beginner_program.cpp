// Q14.  Find the element that occurs once

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
    int found = 0;

    cout<<"Elements that occurs one : ";
    for (int i=0;i<n;i++){
        int count=0;

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
            found=1;
        }
    }
    if(found==0){
        cout<<"Their is no elements that occurs one";
    }
    return 0;
}