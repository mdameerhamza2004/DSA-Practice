class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        map<int,int> mp1;
        for(auto it: nums1){
            mp1[it]++;
        }
        map<int,int> mp2;
        for(int i=0; i<nums2.size();i++){
            if(mp1.count(nums2[i]) and mp1[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mp1[nums2[i]]--;
            }
        }
        return ans;
    }
};