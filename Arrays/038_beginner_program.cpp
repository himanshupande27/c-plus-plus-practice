// Q7. Count frequency of an element

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
for (int i=0;i<n;i++){
       if (arr[i]==-1)
       continue;

int count=0;
    for(int j=0;j<n;j++){
        if (arr[j]==arr[i]){
        count++;
        if(j!=i)
        arr[j]= -1;
    }
   }
   cout<<arr[i]<<" repeat "<<count<<" times"<<endl;
}
    return 0;
}