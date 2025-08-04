// Q10. Merge two arrays

#include <iostream>
using namespace std;

int main() {
  int n1,n2;

  cout<<"Enter number of elements in first array: ";
  cin>>n1;
  int arr1[n1];

  cout<<"Enter "<<n1<<" elements for first array:"<<endl;
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }

  cout<<"Enter number of elements in second array: ";
  cin>>n2;
  int arr2[n2];

  cout<<"Enter "<<n2<<" elements for first array:"<<endl;
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }

// merging

int merge[n1+n2];

for(int i=0;i<n1;i++){
    merge[i]=arr1[i];
  }

  for(int i=0;i<n2;i++){
    merge[n1+i]=arr2[i];
  }
cout<<"Merged array: ";
for(int i=0;i<n1+n2;i++){
    cout<<merge[i]<<" ";
}

    return 0;
}