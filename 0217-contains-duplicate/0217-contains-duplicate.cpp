class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int arSize = nums.size();
        for(int i=0; i<arSize; i++){
            mp[nums[i]]++;
        }
        for( auto it: mp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};