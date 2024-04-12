class Solution {
public:
    int trap(vector<int>& height) {
        int amount =0;
        int n= height.size();
        vector<int> premax(n);
        vector<int> sufmax(n);
        premax[0]=height[0];
        for(int i=1;i<n;i++){
            premax[i]=max(premax[i-1],height[i]);
        }
        sufmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            sufmax[i]=max(sufmax[i+1],height[i]);
        }
         
         for(int i=1;i<n-1;i++){
             int p = min(premax[i],sufmax[i]);

             if(p-height[i]>0){
                 amount = amount+(p-height[i]);
             }

         }

         return amount;  
        
    }
};