class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() >  s.size())return "";  
  
        unordered_map<char,int>target ;  
        for(char c : t){
            target[c]++ ;  
        }
        int need =  target.size() ;
      unordered_map<char,int>window ;
      int have = 0 ; 
      int left = 0 ;  
      int minLength = INT_MAX;
      int start_index = 0;

      for(int right = 0;  right<s.size() ; right++){
        char c = s[right];  
        window[c]++ ;
   if(target.count(c) &&  window[c] ==  target[c])
     have++;

     while (have ==  need ){
        int window_size =  right -  left + 1  ;  
        if(window_size < minLength  ){
            minLength =  window_size ;  
            start_index =  left ;  
        }

        char leftchar =  s[left]; 
        window[leftchar]-- ; 
         
         if (target.count(leftchar) && window[leftchar] < target[leftchar]) {
            have--;

        }
        left++ ;  

     }  
      }
      
           return (minLength == INT_MAX) ? "" : s.substr(start_index, minLength);




        
    }
};
