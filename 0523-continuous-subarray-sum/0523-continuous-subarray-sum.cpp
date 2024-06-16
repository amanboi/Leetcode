class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
    
         
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum = 0;
        
          for(int i = 0;i<n;i++){
         
             sum+=nums[i];
             int rem = sum % k; //rem can't be negative as nums[i]>=0
         

             if(mp.find(rem)!= mp.end()){
                if(i-mp[rem]>1){
                    return true;
                }
                }else {
                    mp[rem] = i;
                }
             
          }

         return false;

    }
};