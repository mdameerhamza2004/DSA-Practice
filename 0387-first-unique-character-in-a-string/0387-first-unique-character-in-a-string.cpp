class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int n = s.length();
        for(auto it: s){
            mp[it]++;
        }
        for(int i=0; i<n;i++){
            if (mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};