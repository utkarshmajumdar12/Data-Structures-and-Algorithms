#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<=n ;i++){
        cin>>arr[i];
    }
    int Max = INT_MIN;
    int Min = INT_MAX;

    for(int i = 0; i<=n; i++){
        if(arr[i]> Max){
            Max = arr[i];    
        }
        if(arr[i]<Min){
            Min = arr[i];
        }
    }
}