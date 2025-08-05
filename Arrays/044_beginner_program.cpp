// Q13. Find duplicate elements

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elements in array:";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" elements for array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int found=0;
    
    cout<<"Duplicates elements are : ";
    for (int i=0;i<n;i++){
        if(arr[i]==-1)
        continue;
        int count=0;

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            if(j!=i)
            arr[j]= -1;
            }
                
        }
        if(count>1){
            cout<<arr[i]<<" ";
            found=1;
        }
        }
        if (found==0){
            cout<<" No duplicates elements ";
        }
       

    return 0;
}