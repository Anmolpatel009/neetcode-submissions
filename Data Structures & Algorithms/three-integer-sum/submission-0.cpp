class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;  
        sort(nums.begin(),  nums.end ()); 
        for(int i =0 ;  i<nums.size();  i++){
          // first skipping duplicates for fixed variable 
          if (i>0 &&  nums[i]==nums[i-1])
          continue ;  
         int  left =  i + 1 ; 
         int right =  nums.size()-1; 

         while(left<right){
            int sum =  nums[i] +  nums[left] + nums[right];  
            if( sum ==0){
            res.push_back({nums[i], nums[left], nums[right]});

            left++; 
              // skipping duplicates for pointers variable
                while (left < right && nums[left] == nums[left-1]) 
                left++ ; 
            }
            if (sum<0){
                left++;  
            }else{
                right--;  
            }
         }  
        }
        return res ;  
    }
};


//steps to solve this fast 
//  s1-> sort the arry 
//s2-> handle duppicate for fix var 
//s3 -> defien left and right and use direction based traversing (using sorting ) 
// s4-> handle duplicates for left  and right 
// s5 -> move fixed pointer if need based on sum is gretaer or smaller 















