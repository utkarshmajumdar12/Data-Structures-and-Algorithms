class Solution {
public:
    int solve(int n,int k)
    {
        if(n==1)
        return 0;

        if(k<=pow(2,n-2))
        return solve(n-1,k);

        else return 1-solve(n-1,k-pow(2,n-2));
    }
    int kthGrammar(int n, int k) {
        return solve(n,k);       
    }
};
