class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        int n=s.length();
        // for(auto it: s){
        //     sChar[it]++;
        // }
        // for(auto it: t){
        //     tChar[it]++;
        // }
        for(int i=0; i<n;i++){
            if(mp1.count(s[i]) and mp1[s[i]]!=t[i])return false;
            if(mp2.count(t[i]) and mp2[t[i]]!=s[i])return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        // if(sChar[]!= tChar[]){
        //     return false;
        // }
    return true;
    }
};