class Solution {
public:
    int maxArea(vector<int>& heights) {
       
 int left = 0 ;  
 int right =  heights.size()-1 ;  
 int max_Area = 0  ;    
 while(left<right){
    int width =  right - left ;  
    int h =  min(heights[left],heights[right]);
    max_Area =  max( max_Area , h*width  );  

    if (heights[left]<heights[right]){
        left++;
    }else{
        right--; 
    }
          

    
 }




return max_Area ;







    }
};
