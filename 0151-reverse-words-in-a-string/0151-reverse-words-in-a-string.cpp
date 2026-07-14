    class Solution {
    public:
        string reverseWords(string s) {
            vector<string> word;
            string temp;
            for(auto ch: s){
                if(ch !=' '){
                    temp+=ch;
                }
                else if(!temp.empty()){
                    word.push_back(temp);
                    temp.clear();
                }
            }
            if(!temp.empty()){ // add last word
                word.push_back(temp);
            }


            string ans;
            for(int i= word.size()-1;i>=0;i--){
                ans += word[i];
                if(i!=0){
                    ans += ' ';
                }
            }
            return ans;


            // string ans;
            // int n= s.length();
            // for(int i= n-1; i>=0;){

            //     // for skipping the space 
            //     while(i>=0 && s[i]==' '){
            //         i--;
            //     }
            //     if(i<0){
            //         break;
            //     }

                
            //     int j = i;
            //     while(i>=0 && s[i] !=' '){ // find the bigning of the word
            //         i--;
            //     }
            //     if(!ans.empty()){
            //         ans += " ";
            //     }
            //     for(int k=i+1; k<=j;k++){ // copy the word
            //         ans+= s[k];
            //     }   
            // }
            // return ans;
        }
    };