class Solution {
public:
    int fun(int i, int j, string &a, string &b,vector<vector<int>>&dp){
        if(i<0 || j< 0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j]) 
            return dp[i][j]=1+fun(i-1,j-1,a,b,dp);
        return dp[i][j]=max(fun(i-1,j,a,b,dp),fun(i,j-1,a,b,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,text1,text2,dp);
    }
};