class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int ma=-1;
        map<int,int> mp;
        for(int i = 0;i<n;i++){
                   int c =0;
                  for (auto it = mp.begin(); it != mp.end(); it++) {
                     if(it->first +nums[i]==0){
                        it->second= 1;
                        c=1;
                        break;
                     }

                  }
                
          if(c==0){
            mp.insert({ nums[i], 0 }); 
        }
        }
         for (auto i = mp.begin(); i != mp.end(); i++) {
                    if(i->second == 1){
                        int a = abs(i->first);
                       ma = max(ma,a);
                    }
         }


    return ma;
    }
};