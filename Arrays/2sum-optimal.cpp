class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        vector <int> res;

        while(left<right){
            
            int sum = nums[left]+nums[right];
            if(sum==target){
                res.push_back(left);
                res.push_back(right);
                
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return res;
        
    }
};
