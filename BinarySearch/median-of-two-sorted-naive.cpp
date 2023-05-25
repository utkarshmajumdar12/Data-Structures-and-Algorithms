class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m=nums2.size();

        int final[n+m];
        int i=0;
        int j=0;
        int k=0;

        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                final[k++]= nums1[i++];
            }
            else{
                final[k++]=nums2[j++];
            }   
        }

        if(i<n){
            while(i<m)
                final[k++]=nums1[i++];  
        }
        if(j<m){
            while(j<m)
                final[k++]=nums2[j++];
        }
        n=n+m;
        if(n%2==1) return final[((n+1)/2)-1];
        else return (double)final[(n/2)];
        
    }
};
