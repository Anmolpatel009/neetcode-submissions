class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //map stores number,index ;  
        unordered_map<int,int>res ;  
        for(int i=0;  i<nums.size() ; i++ ){
            int current_val =  nums[i] ;
            int comp  =  target - current_val ;
            if(res.find(comp)!= res.end()){
                return {res[comp] ,  i  } ;  
            }else {
                res[current_val] = i   ;
            }
        }
        return {} ;
    }
};
