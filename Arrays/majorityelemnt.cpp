#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int majorelement(int arrr[], int n){
    int maxcount = 0;
    int index = -1;

    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]=arr[j]){
                count = count+1;
            }
            if(count>maxcount){
                maxcount = count;
                index=i;
            }
        }
        if(maxcount>n/2){
            cout<<arr[index]<<endl;
        }
        else{
            cout<"No majority element present in the array"<<endl;
        }
    }
}

int main(){
//drivers code;
}