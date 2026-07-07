class Solution {
    public static boolean isValidAns(int arr[], int maxLm,int h){
        long time =0;
        for(int i=0; i<arr.length;i++){
            long cTime = 0;
            if(arr[i]%maxLm ==0 ){
                cTime = arr[i]/maxLm;
            }
            else{
                cTime = arr[i]/maxLm+1;
            }
            time += cTime;

        }
        if(time<=h){
            return true;
        }
        return false;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int max = 0;
        for(int i=0; i < piles.length; i++){
            if(max < piles[i]){
                max = piles[i];
            }
        }
        int str =1;
        int end = max;
        int ans = 0;
        while(str<=end){
            int mid =  str+(end-str)/2;
            if(isValidAns(piles,mid,h)){
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