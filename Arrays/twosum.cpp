#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int twosum(int arr[], int n, int k){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==k){
                return i,j;
            }
        }
        return -1;
    }
}

int main(){
    //drivers code

}