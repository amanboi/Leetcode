class Solution {
public:
    int countOdds(int low, int high) {
        int n = (high-low+1);
        //if n even then half will be odd and half will be even
        if(n%2==0){
            return n/2;
        }
        // if n odd then check starting point
        // in this case both starting and ending will always be either odd or even (same nature)
        if(low%2==0)
        return n/2;
        else 
        return n/2+1;
        
    }


};