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
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}

int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int res = BinarySearch(arr,n,key);
    cout<<res<<endl;
    cout<<"Element found!"<<endl;

    return 0;
}
