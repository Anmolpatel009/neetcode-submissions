class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left =0 ; 
        int right = n-1 ;  

        while(left<right){
            // Step 1: If left is not a letter/number, skip it
            if (!isalnum(s[left])) {
                left++;
                continue;
              }
      if (!isalnum(s[right])) {
                right--;
                continue;
            }
            // Step 3: Compare (case-insensitive)
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
        left++;
            right--;
        }
        return true ;  
        
    }
};
