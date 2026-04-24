class Solution {
public:
    int maxArea(vector<int>& heights) {
       
 int left = 0 ;  
 int right =  heights.size()-1 ;  
 int max_Area = 0  ;    
 while (left < right) {
    // Combine the comparison and the area calculation (optimmized for cpu cycles space time is most optimized )
    if (heights[left] < heights[right]) {
        max_Area = max(max_Area, heights[left] * (right - left));
        left++;
    } else {
        max_Area = max(max_Area, heights[right] * (right - left));
        right--;
    }
 

    
 }




return max_Area ;







    }
};
