class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
         int n = seats.size();

          int count1 = 0;
          int count2= 0;
          int count3 =0;
         for(int i = 0;i<n;i++){
             if(seats[i]==0){
                count1++;
             }else{
               
                break;
             }    
         }
         cout<<count1;

           for(int i =n-1;i>=0;i--){
             if(seats[i]==0){
                count2++;
             }else{
               
                break;
             }    
         }
         cout<<count2;
       int count = 0;
       for(int i = 0;i<n;i++){
            if(seats[i]==1){
                count3 = max(count3,count);
                count = 1;
            }
            else{
                count++;

            }

       }

       count3 = ceil(count3/2);
       int ans = max(count1,count2);
       ans = max(ans,count3);


       return ans;

           

    }
};