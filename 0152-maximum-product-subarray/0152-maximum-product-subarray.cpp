class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
   
        int ans = INT_MIN;
        int suf1 = 1;
        int pre = 1;
        int max1= INT_MIN;
        int max2= INT_MIN;
  

        for(int i = 0;i<n;i++){
            if(pre==0)
            { pre=nums[i];}
            else{ 
            pre= pre*nums[i];}
            max1 = max(pre,max1);

        }
          
        for(int i = n-1;i>=0;i--){
              if(suf1==0)
            { suf1=nums[i];}
            else{ 
            suf1 = suf1*nums[i];}
            max2 = max(suf1,max2);
             
        }
       ans = max(max1,max2);
       return ans;

    }
};