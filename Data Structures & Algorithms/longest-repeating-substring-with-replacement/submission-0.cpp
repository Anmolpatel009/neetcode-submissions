class Solution {
public:
    int characterReplacement(string s, int k) {
        int counts[26] = {0} ;  
        int left  = 0 ;  
        int maxFreq = 0 ;  
        int maxLength = 0 ;  
        int n =  s.size() ;
        for(int right = 0 ;  right<n;  right++){
            int index = s[right] - 'A' ;
            counts[index]++;

        maxFreq =  max(maxFreq ,  counts[index]) ;
        while((right -  left + 1 ) - maxFreq> k  ){
            counts[s[left] - 'A']-- ;  
            left++ ; 
        }


maxLength = max(maxLength, right - left + 1);


        }
 return  maxLength ;  


 
       

    }
};
