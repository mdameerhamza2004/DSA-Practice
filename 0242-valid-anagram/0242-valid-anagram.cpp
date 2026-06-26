class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1;
        for(auto it: s){
            mp1[it]++;
        }
        map<char,int> mp2;
        for(auto it: t){
            mp2[it]++;
        }
        if(mp1.size() != mp2.size()){
            return false;
        }
        for(auto it: mp1){
            if(it.second != mp2[it.first]){
                return false;
            }
        }
        return true;
    }
};