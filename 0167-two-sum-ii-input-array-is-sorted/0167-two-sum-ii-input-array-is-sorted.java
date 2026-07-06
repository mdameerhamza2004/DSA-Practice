class Solution {
    public int[] twoSum(int[] num, int target) {
        int ans[] = {0,0};
        int str =  0;
        int end =  num.length-1;
        while(str<=end){
            int sum = num[str] + num[end];
            if(sum == target){
                ans[0] = str+1;
                ans[1] = end+1;
                return ans;
            }
            else if( sum < target){
                str++;
            }
            else{
                end--;
            }
        }  
        return ans;
    }
}