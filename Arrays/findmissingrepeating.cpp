#include <iostream>
#include <vector>
using namespace std;

vector<int> find_missing_repeating(vector<int> array){
    int n = array.size()+1;
    vector<int> substitute;
    vector<int> ans;
    for(int i=0;i<array.size();i++){
        substitute[array[i]]++;
    }
    for(int i=0;i<array.size();i++){
        if(substitute[i]==0||substitute[i]>1){
            ans.push_back(i);
        }
    }
    return ans;

}


int main(){
    //drivers code;

}