class Solution {
public:
     int minPathhelper(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
          if(i==0){
            int s = 0;
            for(int a = 0;a<=j;a++){
                s+=grid[0][a];
            }
            //dp[i][j]=s;
            return s;
          }
           if(j==0){
            int s = 0;
            for(int b= 0;b<=i;b++){
                s+=grid[b][0];
            }
            //dp[i][j]=s;
            return s;
          }
        // if(i<0 || j<0){return INT_MAX;}
        // if(i==0 and j ==0){return grid[0][0];}
      
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int x = minPathhelper(grid,dp,i-1,j);
        int y = minPathhelper(grid,dp,i,j-1);
         
        dp[i][j] = min(x,y)+grid[i][j];
        return min(x,y)+grid[i][j];


     }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
       return minPathhelper(grid,dp,m-1,n-1);
    }
};