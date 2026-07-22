class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]== '{' or s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false; //
                if( s[i]==')' and st.top()=='(' or
                    s[i]=='}' and st.top()=='{' or
                    s[i]==']' and st.top()=='['){
                            st.pop();
                        }
                else{
                    return false;
                }
            }
        }  
        if(st.empty()){
            return true;
        }
        return false;
    }      
};
        // stack<char>st;
        // for(auto it: s){
        //     if(it=='(' or it=='{' or it=='[' ){
        //         st.push(it);
        //     }
        //     else{
        //         if(st.empty()) return false;
        //         char top = st.top();
        //         if((top == '(' and it== ')') or (top=='{' and it=='}') or (top=='[' and it==']')){
        //             st.pop();
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        // }
        // if(st.empty()){
        //     return true;
        // }
        // return false;
    // }