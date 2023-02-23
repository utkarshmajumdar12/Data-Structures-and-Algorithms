#include <bits/stdc++.h>

using namespace std;
int longestConsecutive(vector<int> &num){
    set<int> hashSet;
    for(int num: nums){
        hashSet.insert(num);
    }

    int longeststreak = 0;
    for(int num: nums){
        if(!hashSet.count(num-1)){
            int current = num;
            int currentStreak = 1;

            while(hashSet.count(current+1)){
                current = current+1;
                currentStreak = currentStreak+1;
            }
            longeststreak = max(longeststreak, currentStreak);
        }
        return longeststreak;
    }
}
int main(){
    //drivers code
}