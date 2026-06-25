class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int typeCandy = candyType.size();
        int eat = typeCandy/2;
        set<int> st;
        for(auto it: candyType){
            st.insert(it);
        }
        if(st.size()<eat){
            return st.size();
        }
        return eat;

    }
};