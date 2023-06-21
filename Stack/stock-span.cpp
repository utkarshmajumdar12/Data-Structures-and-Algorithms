#include <bits/stdc++.h> 
#include <vector>
#include <stack>
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack <pair<int,int>> st;
    vector <int> v;

    for(int i=0 ;i<price.size(); i++){
        if(st.size()==0){
            v.push_back(-1);
        }
        else if(st.size()>0 && st.top().first()>arr[i]){
            v.push_back(st.top().second());
        }
        else if(st.size()>0 && st.top().first()<arr[i]){
            while(st.size()>0 && st.top().first()<arr[i]){
                st.pop();
            }
            if(st.size()==0){
                v.push_back(-1);
            }
            else v.push_back(st.top().second());
        }
        st.push({arr[i], i});
    }
    for(int i=0 ;i<v.size();i++){
        v[i]= i-v[i];
    }
    return v;
}
