class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 ;  
        //int right = 0 ;  
        int maxlength = 0 ;  

        vector<int>seen(128 , -1 ) ; 

        for(int i =0 ; i<s.size() ;  i++){
            char curr =  s[i] ;


            if(seen[curr]>=left){
                left =  seen[curr] + 1 ; 
            }

            seen[curr] = i ;  
            int wins =  i - left + 1 ;  
            maxlength =  max(wins ,  maxlength) ;



        }

        return maxlength ;  
        
    }
};
