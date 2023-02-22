#include <iostream>
using namespace std;

void solve(int arr[], int n){

    int temp = arr[0];

    for(int i = 0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    //drivers code;
}
