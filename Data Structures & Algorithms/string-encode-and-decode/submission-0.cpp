class Solution {
public:

    string encode(vector<string>& strs) {
             string encoded =  "" ;  
          for(int i=0;  i<strs.size(); i++){
            string word =  strs[i] ;
            int len = word.size() ;
            string size =  to_string(len);
           encoded += to_string(len) + "#" + word; 
          
       
        }

   return encoded ;  
       

    }

    vector<string> decode(string s) {
        vector<string>res;  

      int i =0 ;  
      while(i<s.length()){
         int j =i;  

         while(s[j]!='#'){
            j++;
         }
            int len = stoi(s.substr(i, j-i ));
            string word =  s.substr(j+1 , len) ;
            res.push_back(word) ;
            i =  j+1+len ;  
         
      }


      return res ;  

       }
      

    
};
