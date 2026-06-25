class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> st1;
        for(auto it: nums1){
            st1.insert(it);
        }

        set<int> st2;
        for(auto it: nums2){
            st2.insert(it);
        }

        for(auto it: st1){
            if(st2.find(it) != st2.end()){ // when st2 dont find that it element then that returs st2.end thats whay we are use notEqual to st2.end
                ans.push_back(it);
            }
        }
        return ans;
    }
};