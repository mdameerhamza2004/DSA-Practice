class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int def = target - nums[i];

            if (mp.count(def)) {
                return {mp[def], i};   // Correct
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};