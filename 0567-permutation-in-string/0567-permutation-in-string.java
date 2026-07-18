class Solution {        
    static boolean compareFreq(int count1[], int count2[]){
        for(int i=0;  i<26; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true; 
    }
    public boolean checkInclusion(String s1, String s2) {

        if(s1.length()>s2.length()){
            return false;
        }

        //s1 ka freq table
        int count1[] = new int[26];
        for(int i=0; i<s1.length();i++){
            char ch = s1.charAt(i);
            int index = ch -'a';
            count1[index]++;
        }

        int i = 0;  
        int windowLen = s1.length();
        int count2[] = new int[26];
        //first window ka freq table
        for(i=0; i<windowLen;i++){
            char ch = s2.charAt(i);
            int index = ch-'a';
            count2[index]++;
        }

        if(compareFreq(count1, count2) == true){
            return true;
        }
        else{
            // Both the freq Tables are not match
            // go ahead and process ramaining window
            while(i<s2.length()){
                // new window per move kar rahe hain, to new charactor ko freq me add karna hoga 
                char newChar  = s2.charAt(i);
                int newCharIndex = newChar-'a';
                count2[newCharIndex]++;
                //old charactor ki first entry ko remove karna prega
                int oldCharInd = i-windowLen;
                char oldChar = s2.charAt(oldCharInd);
                int freqTableIndOfOldChar = oldChar-'a';
                count2[freqTableIndOfOldChar]--;
                // aap ke paas undated table aagya hai new window ke liye
                // isko compare kro s1 ke reference table se
                if(compareFreq(count1, count2) == true){
                    return true;
                }
                // yaha pe main Hamesha galti karta  hun 
                i++;
            }
        }
        return false;
    }
}