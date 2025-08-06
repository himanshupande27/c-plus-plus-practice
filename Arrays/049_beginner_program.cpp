// Q18. Find missing number in array 1 to N

#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,4,6,7,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=1;i<=arr[size-1];i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(i==arr[j]){
                count++;
                
            }
        }
        if(count==0){
            cout<<i<<" ";}

        }
    
    return 0;
}