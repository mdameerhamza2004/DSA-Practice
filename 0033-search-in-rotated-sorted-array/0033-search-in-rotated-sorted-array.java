class Solution {
    public int search(int[] nums, int target) {
    int ans= -1;
    int str =0;
    int end = nums.length-1;
      while(str<=end){
        int mid = str+(end-str)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[str]<=nums[mid]){
            if(target>=nums[str] && target<nums[mid]){
                end = mid-1;
            }
            else{
                str = mid+1;
            } 
        }
        else{
            if(target>nums[mid] && target<=nums[end]){
                str = mid+1;
            }
            else{
                end= mid-1;
            }
        }
      }  
    return -1;
    }
}