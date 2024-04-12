class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        deque<int> q;
        for(int i = 0;i<n;i++){
            q.push_front(students[i]);
        }
        stack<int> st;
        for(int i = n-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
      int c = 0;
      int j = q.size();
      while(!q.empty() && !st.empty() && c<j ){
        if(st.top()==q.front()){
            st.pop();
            q.pop_front();
            c=0;
        }
        else{
            int t = q.front();
            q.pop_front();
            q.push_back(t);
            j = q.size();
            cout<<j;
            c++;

        }
      }

      
      return q.size();  
        
    }
};