class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;

        for(int i=0; i<arr.size(); i++){
            maxh.push({
                arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1], {arr[i][0], arr[i][1]}
            });

            if(maxh.size()>k){
                maxh.pop();
            }
        }
        arr.clear();
        while(maxh.size()>0){
            pair <int,int> p= maxh.top().second;
            arr.push_back({p.first, p.second});
            maxh.pop();

        }
        return arr;
        
    }
};
