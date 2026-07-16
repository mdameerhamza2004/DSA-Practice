class Solution {
public:
void helper(vector<string>&ans,int n,string temp,int op,int cp){
    if(temp.length()==2*n){
        ans.push_back(temp);
        return;
    }
    if(op<n){
        helper(ans,n,temp+'(',op+1,cp);
    }
    if(op>cp){
        helper(ans,n,temp+')',op,cp+1);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,n,"",0,0);
        return ans;
    }
};