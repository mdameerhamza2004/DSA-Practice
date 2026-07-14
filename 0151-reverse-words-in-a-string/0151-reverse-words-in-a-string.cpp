    class Solution {
    public:
        string reverseWords(string s) {
            string ans;
            int n= s.length();

            for(int i= n-1; i>=0;){

                // for skipping the space 
                while(i>=0 && s[i]==' '){
                    i--;
                }
                if(i<0){
                    break;
                }

                
                int j = i;
                while(i>=0 && s[i] !=' '){ // find the bigning of the word
                    i--;
                }
                if(!ans.empty()){
                    ans += " ";
                }
                for(int k=i+1; k<=j;k++){ // copy the word
                    ans+= s[k];
                }   
            }
            return ans;
        }
    };