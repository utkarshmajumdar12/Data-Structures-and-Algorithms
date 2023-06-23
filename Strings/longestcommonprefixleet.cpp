class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(), strs.end());
        int n=strs.size();
        string first = strs[0];
        string end= strs[n-1];
        for(int i=0; i<min(first.size(), end.size()); i++){
           if(first[i]!=end[i]) return ans;
           else ans+=first[i];

        }
        return ans;
        
        
    }
};
