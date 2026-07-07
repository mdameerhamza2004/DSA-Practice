class Solution {
    public int pivotIndex(int[] nums) {
        int numSum = 0;
        for(int it: nums){
            numSum+=it;
        }
        int lSum=0;
        for(int i=0; i<nums.length;i++){
            int rSum = numSum-lSum-nums[i];
            if(lSum==rSum){
                return i;
            }
            lSum += nums[i];
        }
        return -1;



        // for(int i=0; i<nums.length; i++){
        //     int lfSum =0;
        //     int rtSum =0;
        //     for(int j=0; j<i;j++){
        //         lfSum += nums[j];
        //     }
        //     for(int k=i+1; k<nums.length;k++){
        //         rtSum += nums[k];
        //     }
        //     if(lfSum == rtSum){
        //         return i;
        //     }
        // }
        // return -1;




        // int lfSum =0;
        // for(int i=0; i<nums.length; i++){
        //     lfSum += nums[i];
        //     int rtSum =0;
        //     for(int k=i+1; k<nums.length;k++){
        //         rtSum += nums[k];
        //     }
        //     if(lfSum-nums[i]==rtSum){
        //         return i;
        //     }
        // }
        // return -1;




        // int lfSum =0;
        // for(int i=0; i<nums.length; i++){
        //     int rtSum =0;
        //     for(int k=i+1; k<nums.length;k++){
        //         rtSum += nums[k];
        //     }
        //     if(lfSum==rtSum){
        //         return i;
        //     }
        //     lfSum += nums[i];
        // }
        // return -1;
    }
}