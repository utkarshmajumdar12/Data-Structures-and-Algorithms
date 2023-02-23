#include <iostream>
using namespace std;
int leadersinarray(int arr[], int n){
    int max= arr[n-1];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>0;i--){
        if(arr[i]>max){
            cout<<arr[i]<<" ";
            max=arr[i];
        }
    }
    cout<<"\n";
}
int main(){
//drivers code;
}