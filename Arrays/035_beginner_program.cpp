// Q4. Search an element in array

#include <iostream>
using namespace std;

int main() {
    int n,a;
    cout<<"Enter a number: ";
    cin>>n;
    int num[n];

    cout<<"Enter "<<n<<" elements:"<<endl;
    
    for (int i=1;i<=n;i++){
        cout<<"Enter no "<<i<<" :";
        cin>>num[i];
    }

    cout<<"Enter element to search:";
    cin>>a;

   int b=-1;

   for (int i=1;i<=n;i++){
   if (num[i]==a){
    b=i;
    break;
   }
}

if(b!=-1){
cout<<"Element found at index "<<b;}
    else{
    cout<<"Element is not found at index";}
   
   return 0;
    }