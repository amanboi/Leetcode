# define numCourses n
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int m = prerequisites.size();
       
       vector<int> indg (n,0);
        for(int i = 0;i<m;i++){
           // for(auto it:prerequisites[i]){
                indg[prerequisites[i][0]]++;
            //}
        }
        queue<int> q;
        for(int i = 0;i<n;i++){
            if(indg[i]==0){
                q.push(i);
            }
        }
         for(int i = 0;i<n;i++){
        cout<<indg[i];
        }
        if(q.size()==0){
            return false;
        }
        
        int c = 0;

        while(q.size()!=0){
            int rem = q.front();
            q.pop();
            cout<<rem;
            indg[rem]=-1;

            c++;

            for(int i = 0;i<m;i++){

                   if(prerequisites[i][1]==rem ){
                    indg[prerequisites[i][0]]--;
                   }
                    if( indg[prerequisites[i][0]]==0){
                    q.push(prerequisites[i][0]);
                    indg[prerequisites[i][0]]=-1;

                                
                   }
                 
            }
             
                 
           
    

        }
        cout<<c;
        if(c==n){
            return true;
        }
        return false;

         
        
    }
};