class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MAX;
        int str =0; int end =0;
        int sum = arr[0];
        while(end<n){
            if(sum<target){ 
                if(end<n-1){
                    end++;
                    sum += arr[end];
                }
                else{
                    break;
                }
            }
            if(sum>=target){
                int currSize = end-str+1;
                ans = min(ans,currSize);
                sum -= arr[str];
                str++;
            }
        }
        return ans==INT_MAX? 0:ans;
    }
};