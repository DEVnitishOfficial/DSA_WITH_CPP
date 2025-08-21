// 11. Container With Most Water : https://leetcode.com/problems/container-with-most-water/description/

// solution : using two pointer approach



function findMaxArea(height){
    let n = height.length;
    let left = 0;
    let right = n-1;
    let maxArea = 0
    
    while(left < right){
        let width = right - left
        let  minHeight = Math.min(height[left], height[right])
        
        let currentArea = width * minHeight
            maxArea = Math.max(currentArea, maxArea)
            
        if(height[left] < height[right]){
            left++
        }else if(height[left] > height[right]){
            right--
        }else {
            left++
            right--
     }
}
    
    return maxArea;
}

let height = [1,8,6,2,5,4,8,3,7]

const res = findMaxArea(height)

console.log(res);

/** Explanation : 

Here we are calculating height of the wall from the given “height” array and calculating the width of
 the container by using their index, here in our case i have started left index as 0 and right most 
 index as (height.length-1) i.e. 8, is the initial width of the container and we move the right or left 
 pointer in comparison with the min height.

Suppose we have two wall one wall height is 8(left pointer) and second wall height is 7(right pointer), 
so here i will decrease the left pointer in order to find the max height wall because it’s height is less
 than the left wall height.

*/