class Solution {
public:
    bool isValid(string s) {
        unordered_map<char , char > brackmap = { 
            { ')' ,  '(' } , 
            {  '}' , '{'} ,
            {   ']'  ,  '[' }

             };
      
      stack<char>st ;  
      for(char c :  s ){
        if(brackmap.find(c)!=brackmap.end()){

           if(st.empty())
             return false ;  

         char topEle =  st.top() ;
         st.pop() ;
           
            if(topEle != brackmap[c])
            return false ;  
        
               } else{
                  st.push(c) ;
                }
            




        }
      

      return st.empty() ;
    }
};
