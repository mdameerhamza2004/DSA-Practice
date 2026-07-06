class Solution {
    public int[] searchRange(int[] nums, int target) {
        int ans [] = {-1,-1};
        int str =0;
        int end = nums.length-1;

        while(str<=end){
            int mid = str+(end-str)/2;
            if(nums[mid]==target){
                ans[1] = mid;
                str = mid+1;

            }
            else if(target>nums[mid]){
                str = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        str =0;
        end = nums.length-1;
        while(str<=end){
            int mid = str+(end-str)/2;
            if(nums[mid]==target){
                ans[0] = mid;
                end = mid-1;
            }
            else if(target>nums[mid]){
                str = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
}