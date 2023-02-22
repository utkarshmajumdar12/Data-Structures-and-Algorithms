#include <iostream>
#include <bits/stdc++.h>

int find_Single(int arr[], int n){

    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j]){
                count = count+1;
            }
        }
        if(count==1){
            return A[i];
        }
    }
    return -1;
}

int main(){

}