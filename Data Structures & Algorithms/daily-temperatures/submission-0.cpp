class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =  temperatures.size() ;
        vector<int>result(n,0) ;
        stack<int>warm ;
        
        for(int i=0 ;  i<n ;  i++){
          while(!warm.empty() && temperatures[i] > temperatures [warm.top()] ){
            int previn = warm.top() ;
            warm.pop() ; 

            result[previn] = i  - previn ;    
          }

          warm.push(i) ;
        }
 
 return result ;  

    }
};
