#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subarraywgivensum(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];

            if(sum==k){
                for(int p=i;p<j;p++){
                    cout<<arr[p]<<" ";
                    cout<<endl;
                }
            }
        }
    }
}
int main(){
//drivers code;
}