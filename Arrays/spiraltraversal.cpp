#include <bits/stdc++.h>

using namespace std;

const int R=4, C=4;

void printspiral(int mat[4][4], int R, int C){
    int top=0, left=0, bottom= R-1; right = C-1;
    while(top<=down&&left<=right){
        for(int i=left; i<=right; i++){
            cout<<mat[top][i]<<" ";
            top++;
        }
        for(int i=top; i<=bottom;i++){
            cout<<mat[i][right]<<" ";
            right--;
        }
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
                bottom--;
            }

        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
                left++;
            }
        }
    }
}

int main(){
    //drivers code
}