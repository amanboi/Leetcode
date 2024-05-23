class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int rsteps = n-1;
        int csteps = m-1;
        int i = 0;
        int j = 0;
        while(rsteps>0 and csteps>0){
               for(int k = 0;k<rsteps;k++){
        ans.push_back(matrix[i][j]);
        j++; 
    }
        for(int k = 0;k<csteps;k++){
        ans.push_back(matrix[i][j]);
        i++; 
    }
        for(int k = 0;k<rsteps;k++){
     ans.push_back(matrix[i][j]);
        j--; 
    }
    
        for(int k = 0;k<csteps;k++){
        ans.push_back(matrix[i][j]);
        i--; 
    }
   i++;
   j++;
        rsteps= rsteps-2;
        csteps= csteps-2;
        }

      if(rsteps==0){
         for(int k = 0;k<csteps+1;k++){
                  ans.push_back(matrix[i][j]);
                  i++;
         }
      }else if(csteps==0){
               for(int k = 0;k<rsteps+1;k++){
                  ans.push_back(matrix[i][j]);
                  j++;
         }
      }
return ans;
        
    }
};