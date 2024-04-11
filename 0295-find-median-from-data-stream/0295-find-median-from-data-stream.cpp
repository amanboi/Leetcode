class MedianFinder {
public:
   priority_queue<int> large;
   priority_queue<int,vector<int>, greater<int>> small;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(small.size()==large.size()){
            small.push(num);
            large.push(small.top()); 
            small.pop();
            
        }
        else{
            large.push(num);
            small.push(large.top());
            large.pop();
        }
        
    }
    
    double findMedian() {
        double ans;
         if(small.size()==large.size()){
             return (small.top()+large.top())/2.0;
            
        }
        else
        { ans = large.top();}

        return ans;

        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */