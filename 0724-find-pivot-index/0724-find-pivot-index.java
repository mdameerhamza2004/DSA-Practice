class Solution {
    public int pivotIndex(int[] nums) {
        for(int i=0; i<nums.length; i++){
            int lfSum =0;
            int rtSum =0;
            for(int j=0; j<i;j++){
                lfSum += nums[j];
            }
            for(int k=i+1; k<nums.length;k++){
                rtSum += nums[k];
            }
            if(lfSum==rtSum){
                return i;
            }
        }
        return -1;
    }
}