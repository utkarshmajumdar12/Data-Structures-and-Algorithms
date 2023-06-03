class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
               unordered_map <int,int> mp;
        priority_queue <pair <int,int>> q;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &i:mp){
            q.push({-i.second,i.first});
        }
        nums.clear();
        while(!q.empty()){
            for(int i=0;i<-(q.top().first);i++){
                nums.push_back(q.top().second);
            }
            q.pop();
        }
        return nums;

        
    }
};
