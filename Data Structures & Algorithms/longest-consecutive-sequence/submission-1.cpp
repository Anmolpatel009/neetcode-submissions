class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        //step 1 -> convert the array into unordered set 
        //Why? Because checking if (s.count(x)) takes $O(1)$ time, whereas 
        //checking if (nums[i] == x) takes $O(n)$ time.

        unordered_set<int> ans(nums.begin(), nums.end());
        int longest = 0;

        if (nums.empty()) 
        return 0; 

        for(int n : ans ){
          if(ans.find(n-1)==ans.end()){
               int   abs = n;  
               int   currentStreak = 1;  
           

               while(ans.find(abs+1)!=ans.end()){
                    abs = abs +  1;  
                    currentStreak += 1;  
               }


             longest = max(currentStreak ,  longest ) ;
            
        }
    }
        return longest; 
        
    }
};
