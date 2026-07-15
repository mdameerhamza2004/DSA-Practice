class Solution {
    public String reverseWords(String s) {
        StringBuilder ans = new StringBuilder();
        int i= s.length()-1;

        while(i >= 0){
            // remove all extra spaces 
            while(s.charAt(i)==' ' && i>=0){
                i--;
            }
            if(i<0){
                break;
            }
            int j = i;
            //fing the starting index of the wort
            while(j>=0 && s.charAt(j) !=' '){
                j--;
            }
            // jaise hi j index wale space pe pahunchega ruk jayega
            // then us word ko answer me append karfe hao
            ans.append(s.substring(j+1,i+1));
            //remove faltu ke spaces where j is standing and the add the string in answer
            while(j>=0 && s.charAt(j)==' '){
                j--;
            }
            // j<0, iska matlb j first word ke upar the no extra spaces needed
            //j>=0, space needed
            if(j>=0){
                ans.append(' ');
            }
            //place last idex at the  remaining steing 
            i = j;
        } 
        return ans.toString();
    }
}