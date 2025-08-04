// Q8. Find second largest element

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" elements:";
    
    for(int i=0;i<n;i++){
        
        cin>>num[i];
    }

    int max=num[0];
    int second_largest =-1;

    for(int i=1;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

for(int i=0;i<n;i++){
        if(num[i]>second_largest && num[i]!=max){
            second_largest = num[i];
        }
    }

    if (second_largest == max||second_largest ==-1) {
    cout << "No second largest exists." << endl;
} else {
    cout << "Second largest is: " << second_largest << endl;
}
return 0;
}