class Solution {
    public int pivotIndex(int[] nums) {
        int lfSum =0;
        for(int i=0; i<nums.length; i++){
            int rtSum =0;
            for(int k=i+1; k<nums.length;k++){
                rtSum += nums[k];
            }
            if(lfSum==rtSum){
                return i;
            }
            lfSum += nums[i];
        }
        return -1;
    }
}