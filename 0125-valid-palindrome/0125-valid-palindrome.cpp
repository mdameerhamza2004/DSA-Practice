class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(auto it: s){
            if((it>='a' and it<='z') or (it>='A' and it<='Z') or (it>= '0' and it<= '9')){
                ans += tolower(it);
            }
        }
        cout<<ans<<endl;
        int str =0;
        int end = ans.size()-1;
        // if(end==0){
        //     return true;
        // }
        while(str<=end){
            if(ans[str]!=ans[end]){
                cout<<str<<" "<<end<<endl;
                cout<<ans[str]<<endl;
                return false;
                
            }
            str++;
            end--;
        }
        return true;
    }
};