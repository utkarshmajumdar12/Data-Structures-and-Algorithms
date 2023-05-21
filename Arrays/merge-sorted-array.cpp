class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {

        int left = m-1;
        int right = 0;
        while(left>=0 && right<n){
            if(arr1[left]> arr2[right]){
                swap(arr1[left], arr2[right]);
                left--;
                right++;
            }
            else{
                break;
            }
            
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        
    }
};
