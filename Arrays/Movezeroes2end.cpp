#include <bits/stdc++.h>
using namespace std;

void zeores2end(int arr[], int n){
    int k = 0;
    while(k<n){
        if(arr[i]==0){
            break;
        }
        else{
            k=k+1;
        }
    }

    int i =k , j=k+1;
    while(i<n && j<n){
        if(arr[j]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
        j++;
    }
}
int main(){
    //drivers code;
}