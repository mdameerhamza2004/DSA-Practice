class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        set<int> st;
        for(int i=1; i<=n; i++){
            st.insert(i);
        }  
        for(int x : nums) {
            st.erase(x);
        }
        for(auto it: st){
            ans.push_back(it);
        } 
        return ans;
    }
};