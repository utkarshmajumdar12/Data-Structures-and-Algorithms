class Solution {
public:
    int strStr(string haystack, string needle) {
    
        
           int n = needle.size();
           int m = haystack.size();
        
            if(n==0) 
            return 0;
        
        if(haystack.size() < needle.size())
            return -1;
        
      for(int i = 0; i<=(m-n);i++)
      {
          bool isBool = true;
          int indx;
          
         for(int j = 0; j<n; j++)
         {
             if(needle[j] !=haystack[j+i])
             {
                 isBool = false;
                 break;
             }
             
             indx = i;
         }
          
           if(isBool)
               return indx;
      }
       
        return -1;
    }
};
