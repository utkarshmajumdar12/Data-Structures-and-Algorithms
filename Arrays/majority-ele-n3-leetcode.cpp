class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int ele1;
        int ele2;

        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && ele2!=nums[i]){
                cnt1=0;
                ele1=nums[i];
            }
            else if(cnt2==0 && ele1!=nums[i]){
                cnt2=0;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        vector<int> ls;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1) cnt1++;
            if(nums[i]==ele2) cnt2++;
        }
        int target = (int)(nums.size()/2)+1;
        if(ele1>=target) ls.push_back(ele1);
        if(ele2>=target) ls.push_back(ele2);
        sort(ls.begin(), ls.end());
        return ls;
    }
};
