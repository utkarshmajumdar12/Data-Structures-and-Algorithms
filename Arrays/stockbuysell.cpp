#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &array){
    int maxPro = 0;
    int n= array.size();
    int minPrice = INT_MAX;
    for(int i=0;i<n;i++){
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i]-minPrice);
    }
    return maxPro;
}
int main(){
    //drivers code
}