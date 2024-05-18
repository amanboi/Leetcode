class Solution {
public:
    int nextGreaterElement(int n) {
         string str = to_string(n);

         int id = -1;
         for(int i = str.length()-2;i>=0;i--){
            if(str[i]<str[i+1]){
                id = i ;
                break;
            }
         }
        

         if(id==-1){
            return -1;

         }

         int val = str[id];
         int justlarge = id+1;
         for(int i = id+1;i<=str.length()-1;i++ ){
             if(str[i]>val and str[i]<=str[justlarge]){
                justlarge = i;
             }
         }

         swap(str[justlarge],str[id]);

         sort(str.begin()+id+1,str.end());

          long long ans = stoll(str);
          cout<<ans;

        if (ans > INT_MAX) {
            return -1;
        } else {
            return (int)ans;
        }




    }
};