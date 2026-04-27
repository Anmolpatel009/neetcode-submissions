class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //cache optimized code 
       if(prices.size()<2){
        return 0 ;
       }
       
        int minPrice = prices[0] ;
        int maxProfit =  0; 

        for(size_t i = 1 ;  i<prices.size() ; i++){
            minPrice =  min(minPrice  ,  prices[i]) ;
            maxProfit = max(maxProfit ,  prices[i] - minPrice ) ;
        }
return maxProfit ;  
        
    }
};




//  maturity is when you realise you just wrote a algo for some hft cry cry cry joker : 
