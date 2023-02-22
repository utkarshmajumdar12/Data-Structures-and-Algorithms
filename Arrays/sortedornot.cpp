#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n;i++){
        if(arr[i-1]<arr[i]){
            return true;
        }
        else{
            return false;
        }

    }
}

int main(){
    //drivers code
}