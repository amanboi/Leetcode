class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int k=0;
        for(int i = 0;i<n;i++){
            if(word[i]==ch){
               k = i;
               break;
            }
           
        }

        if(k==0){
          return word;  
        }

        int j = 0;
        while(j<=k){
            char ch = word[j];
            word[j] = word[k];

            word[k]=ch; 
            j++;
            k--;

        }
        return word;
         
        
        

        



        
    }
};