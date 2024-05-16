class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i  = 0;
        while(i<n){
            if(nums[i]<=0 or nums[i]>n or nums[i]==i+1){
                i++;
            }else{
                int id = nums[i]-1;
                if(nums[i]==nums[id]){
                              i++;
                }else{
                    swap(nums[i],nums[id]);
                }
            }
        }

        for(int i = 0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }

        return n+1;


    }
};
// in O(1) space without using any other data structure

