#include <iostream>
using namespace std;

int main(){
    int n;
    int max = INT_MIN;
    cin>>n;

    int arr[n];

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<max;
        }
    }
}