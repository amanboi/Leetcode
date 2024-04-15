class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
    return numSquareshelper(n,dp);;
        
    }

    int numSquareshelper(int n, vector<int>& dp){
         if(n==0 or n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int s = INT_MAX;
        for(int i = 1;i*i<=n;i++){
            int temp  = numSquareshelper(n-i*i,dp);
            s = min(s,temp);
        }
        dp[n]=s+1;

        return s+1;
    }
};