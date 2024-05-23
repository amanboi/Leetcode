class Solution {
public:
       int checkbit(int n,int k){
        int a = 1<<k;
        if(n&a){
            return 1;
        }else{
            return 0;
        }
       }
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<32;i++){
            int count =0;
            for(int j = 0;j<n;j++){
                if(checkbit(nums[j],i)){
                    count++;
                }
            }
            
            if(count%3==1){
                ans+=1<<i;
            }

        }

        return ans;
        
    }
};