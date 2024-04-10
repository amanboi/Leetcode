class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for(int i =0;i<n;i++){
            if(st.size()==0){
                st.push(asteroids[i]);
                continue;
            }

            if(st.top()*asteroids[i]>0 or st.top()<0 ){
                st.push(asteroids[i]);
                continue;
            }
            else
                { 
                    while(!st.empty() and st.top()>0 and abs(asteroids[i])>abs(st.top()) ){
                        //cout<<st.top();
                    st.pop();
                }
              if(st.empty()  or st.top()*asteroids[i]>0 or st.top()<0){
                st.push(asteroids[i]);
            } else  if(abs(asteroids[i])==abs(st.top())){
                st.pop();
            }


            }

        
            }
        

        int m = st.size();
        vector<int> ans(m);
        for(int i= m-1;i>=0;i--){
            ans[i]= st.top();
            st.pop();
            
        }

        
   // reverse(ans.begin(), ans.end());
    return ans;
        
    }
};