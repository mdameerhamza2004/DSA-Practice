class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int arSize = nums.size();
        // unordered_map<int,int>mp;
        // for(int i=0; i<arSize; i++){
        //     mp[nums[i]]++;
        // }
        // for( auto it: mp){
        //     if(it.second>1){
        //         return true;
        //     }
        // }
        // return false;

        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size()<nums.size()){
            return true;
        }
        return false;
    }
};