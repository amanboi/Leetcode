class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int emptyBottles = numBottles;
        while(emptyBottles>=numExchange){
               int a = emptyBottles/numExchange;
               emptyBottles= emptyBottles%numExchange;
               emptyBottles+=a;
               ans+=a;
        }

        return ans;
        
    }
};