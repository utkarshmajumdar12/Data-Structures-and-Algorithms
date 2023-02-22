#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){

    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;
    }
    int small = INT_MAX, sec_small = INT_MAX;
    int large = INT_MIN, sec_large = INT_MIN;

    for(int i=0;i <n; i++){
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]<sec_small && arr[i]!=small){
            sec_small = arr[i];
        }
        if(arr[i]>sec_large && arr[i]!=large){
            sec_large = arr[i];
        }
    }

    cout<<"Second smallest "<<sec_small<<endl;
    cout<<"Second largest "<<sec_large<<endl;
}