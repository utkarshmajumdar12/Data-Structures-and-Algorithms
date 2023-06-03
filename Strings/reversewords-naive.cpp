class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        int i=0;
        string str ="";
        for( i=0; i<s.length(); i++){
            
            if(s[i]==" "){
                st.push(str);
                str="";
            }
            else{
                str+=s[i];
            }
        }
        str ans="";
        while(st.size()!=1){
            ans+=st.top()+" ";
            st.pop();
        }
        ans+=st.top();
        return ans;
    }
};
