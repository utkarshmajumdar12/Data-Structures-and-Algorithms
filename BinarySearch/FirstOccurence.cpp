#include <iostream>
using namespace std;

int Firstoccurence(int arr[], int size , int key){
    
    int start = 0;
    int end = start - 1;
    int res ;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            res = mid;
            end = mid -1;
        }
        else if(key< arr[mid]){
            end= mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return res;
}


int main(){
    
    int n = 10;
    int arr[n] ={1,2,4,4,5,6,7,8,9,10};
    int key = 4;
    int res1 = Firstoccurence(arr, n, key);
    cout<<"found at"<< res1<<endl;
    
}
