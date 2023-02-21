#include <iostream>
using namespace std;

int NumberRotated(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        
        int next = (mid+1)%size;
        int prev = (mid+size-1)%size;
        
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            start = mid+1;
        }
        else if(arr[mid]<=arr[end]){
            end=mid-1;
        }
    }
}


int main(){
    
}