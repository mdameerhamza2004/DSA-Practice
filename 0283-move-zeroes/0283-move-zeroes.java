class Solution {
    public void moveZeroes(int[] nums) {
        int j= 0;
        for(int i=0; i<nums.length;i++){
            if(nums[i]!=0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;;
                j++; 
            }
        }
        
        
        // int[] ans = new int[nums.length];
        // int index =0;
        // // int zeroCount =0;
        // for(int i=0; i<nums.length;i++){
        //     if(nums[i]!=0){
        //         ans[index] = nums[i];
        //         index++;
        //     }
        // }
        // for (int i = 0; i < nums.length; i++) {
        //     nums[i] = ans[i];
        // }
    }
}