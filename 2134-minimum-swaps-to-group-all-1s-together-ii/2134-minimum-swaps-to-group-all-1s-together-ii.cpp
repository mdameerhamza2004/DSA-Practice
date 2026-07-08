class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int windSize =0;
        for(int i=0; i<n;i++){
            if(nums[i]==1){
                windSize++;
            }
        }
        int zeroCountWind = 0;
        for(int i=0; i<windSize;i++){
            if(nums[i]==0){
                zeroCountWind++;
            }
        }
        int ans = zeroCountWind;
        for(int i=0; i<n;i++){
            if(nums[i]==0){
                zeroCountWind--;
            }
            if(nums[(i+windSize)%n]==0){
                zeroCountWind++;
            }
            ans = min(ans,zeroCountWind);
        }
        return ans;
    }
};