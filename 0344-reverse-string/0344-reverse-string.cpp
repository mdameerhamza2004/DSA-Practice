class Solution {
public:
    void reverseString(vector<char>& s) {
        int str =0;
        int end = s.size()-1;
        while(str <= end){
            // if(s[str] != s[end]){
            //     s[str] = s[str]^s[end];
            //     s[end] = s[str]^s[end];
            //     s[str] = s[str]^s[end];
            // }
            char temp = s[str];
            s[str] = s[end];
            s[end] = temp;

            str++;
            end--;
        }
    }
};