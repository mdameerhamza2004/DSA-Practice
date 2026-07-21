class Solution {
    public int compress(char[] chars) {
        int  readIndex =0;
        int writeIndex =0;
        while(readIndex < chars.length){
            char currChar = chars[readIndex];
            int count =0;

            //count duplicate Charactor
            while(readIndex<chars.length && currChar == chars[readIndex]){
                readIndex++;
                count++;
            }


            // abb mere pass current char and char count both are available 
            chars[writeIndex] = currChar;
            writeIndex++;

            // now insert the count
            if(count>1){
                String countStr = String.valueOf(count);
                for(char digit:  countStr.toCharArray()){
                    chars[writeIndex] = digit;
                    writeIndex++;
                }
            }
        }
        return writeIndex;
        //return the length of compressed string
    }
}