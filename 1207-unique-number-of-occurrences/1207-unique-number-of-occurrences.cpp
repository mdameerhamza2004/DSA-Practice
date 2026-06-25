class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
       map<int,int> mp;
       for(auto it:arr){
        mp[it]++;
       }

        set<int> st;
        for (auto it : mp) {
            if (st.count(it.second)) {
                
                return false;   // Duplicate value found
            }
            st.insert(it.second);
        }
        return true;   // All values are unique
    }
};