// Q12. Find all unique elements

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

    cout<<"Unique elements are : ";
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
        cout<<"No unique elements found";
    }
    return 0;
}