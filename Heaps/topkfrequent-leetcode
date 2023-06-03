class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> vec;
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > min_h;
        for(auto i=um.begin();i!=um.end();i++){
            min_h.push({i->second,i->first});
            if(min_h.size() >k) min_h.pop();
        }
    for(int i=0;i<k;i++){
        vec.push_back(min_h.top().second);
        min_h.pop();
    }
        return vec;
    }
};
