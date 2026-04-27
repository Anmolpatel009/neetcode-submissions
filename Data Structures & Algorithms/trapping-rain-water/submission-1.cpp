class Solution {
public:
    int trap(vector<int>& height) {
        // Fast I/O for performance
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int left = 0 ;  
        int right = height.size()-1; 
        int leftmax = 0 ; 
        int rightmax = 0 ;  
        int total = 0 ;  
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmax)
                    leftmax = height[left];
                 else
                    total +=  leftmax - height[left] ;
                    left++ ;

            }else{
// Fast I/O for performance
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
            
            
                if(height[right]>=rightmax)
                    rightmax = height[right];
                 else
                    total +=  rightmax- height[right] ;
                    right-- ;

            }
        }
     return total ; 
    }  
};



// only hurdle in this question i found is cal water for  each valkey and if else ladder how dumb i am  bitch : 




// algorithm is already most optimized in form but we can optimize it more by reducing cpu cycles and cache hits and branch prediction 
//by adding this for fast i/o // Fast I/O for performance
       // ios_base::sync_with_stdio(false);
        //cin.tie(NULL);