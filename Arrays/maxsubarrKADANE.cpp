#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int maxsubarray(vector<int> &nums, vector<int> &subarray){
    int msf = INT_MIN, meh = 0;
    int s =0;
    for(int i=0;i<nums.size()-1;i++){
        meh = meh+nums[i];
        if(meh>msf){
            subarray.clear();
            msf = meh;
            subarray.push_back(s);
            subarray.push_back(i);
        }
        if(meh<0){
            meh=0;
            s=i+1;
        }
    }
    return msf;
}
int main(){
    //drivers code;

}