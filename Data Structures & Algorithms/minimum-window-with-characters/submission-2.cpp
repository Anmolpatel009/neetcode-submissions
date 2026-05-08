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


/*
unordered_map<char,int>target ;  
        for(char c : t){
            target[c]++ ;  
        }
need is  a  variable which will nukber of char we  have to look for 
->importing t's ele in map{target} to count freq of chr's


unordered_map<char,int>window ;
      int have = 0 ; 
      int left = 0 ;  
      int minLength = INT_MAX;
      int start_index = 0;
->definied window with starting index of window & minLenght to find min window

  for(int right = 0;  right<s.size() ; right++){
        char c = s[right];  
        window[c]++ ;
->moving right and puttin ele in window ; 

if(target.count(c) &&  window[c] ==  target[c])
     have++;
->checking if the target char is inside window or not && is window == target if 
yes than update have( means we have one ele out of req now )


while (have ==  need ){
        int window_size =  right -  left + 1  ;  
        if(window_size < minLength  ){
            minLength =  window_size ;  
            start_index =  left ;  
    
-> this will run untill the window is valid && finding the smallest windoe and 
starting index of window and updating min length 

char left_char = s[left];
    window[left_char]--;
-> this is a trimming process The Shrink: Now you begin the "Trimming" process.
 You take the character at the left pointer and remove it from your window count.

->Action: You are literally sliding the left side of the box one step to the right.
if (target.count(left_char) && window[left_char] < target[left_char]) {
        have--;
    }

->The Breakpoint: This is the most important logic. You check: "Did the character 
I just removed actually matter?"

Condition: If left_char was part of your target requirements, 
and by removing it, you now have fewer than the required amount (e.g., you needed 2 'A's and you now have 1)...

->Action: You decrement have.

->Consequence: On the next loop iteration, while (have == need) will be False.
 The loop will break, and you'll go back to moving the right pointer to find a 
 replacement.


left++;
->The Progress: Finally, you physically move the left pointer forward to continue the process.



*/







