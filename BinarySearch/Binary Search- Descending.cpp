#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int mid = start + (end - start)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            start = mid+1;
        }
        else{
            
            end = mid-1;
        }
    }
}

int main()
{
    int n = 10;
    int arr[n] = {10,9,8,7,6,5,4,3,2,1};
    int key = 7;
    int res = BinarySearch(arr,n,key);
    cout<<res<<endl;
    cout<<"Element found!"<<endl;

    return 0;
}
