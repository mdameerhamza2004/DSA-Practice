class Solution {
    public boolean isValidSolution(int arr[], int k, int maxLength){
        int arrCount = 1;
        int arrLength = 0;
        for(int i=0; i<arr.length; i++){
            if(arrLength + arr[i] <= maxLength){
                arrLength += arr[i];
            }
            else{
                arrCount++;
                arrLength =0;
                if(arr[i]>maxLength){
                    return false;
                }
                if(arrCount > k){
                    return false;
                }
                else{
                    arrLength = arrLength + arr[i];
                }
            }
        }
        return true;
    }
    public int splitArray(int[] nums, int k) {
        int sum =0;
        int str =0;
        for (int it : nums) {
            sum += it;
            str = Math.max(str, it);
        }

        int end = sum;
        int ans = -1;
        while(str<=end){
            int mid = str+(end-str)/2;
            if(isValidSolution(nums, k, mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                str = mid+1;
            }
        }
        return ans;
    }
}