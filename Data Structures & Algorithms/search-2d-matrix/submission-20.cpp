class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() ;
                

        int rows =  matrix.size() ;if (rows == 0) return false;
        int col  =  matrix[0].size() ;
        int total =  rows * col ;
        int l =0 ,  r =  total - 1  ;
        while(l<=r){
            int mid = l + (r - l) / 2;
            int val = matrix[mid/col][mid%col] ;
            if(val==target){
                return true ;
        
            }else if(val < target  ){
                l =  mid + 1 ;
            }else if (val >  target ){
                r = mid - 1 ;
            }
        }
        return false ;
    }
};
