class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
        return false ;  
        vector<int>target(26,0) ;
        vector<int>window(26,0) ;
        
        for(int i = 0 ; i<s1.length() ; i++){
            target[s1[i]  - 'a']++; 
            window[s2[i]   - 'a']++ ;
        }
         
          if (target ==  window) return true ;

    for(int i=s1.length() ; i<s2.length() ;  i++ ){
           window[s2[i] - 'a']++;  // add a char 
           window[s2[i-s1.length() ]- 'a']-- ;  //ejcts a char 
if (target == window ) return true ;  

    }
return false ;  
        
    }
};
