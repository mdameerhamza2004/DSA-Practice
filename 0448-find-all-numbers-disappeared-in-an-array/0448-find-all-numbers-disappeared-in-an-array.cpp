class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_set<int> st;
        for(auto it: nums){
            st.insert(it);
        }
        for(int i=1; i<=n; i++){
           if(st.find(i)==st.end()){
            ans.push_back(i);
           }
        }  
        // for(int x : nums) {
        //     st.erase(x);
        // }
        // for(auto it: st){
        // } 
        return ans;
    }
};