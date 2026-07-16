class Solution {
public:
    void rev(vector<char>& arr, int str, int end){
        if(str>end){
            return;
        }
        // if(arr[str]!=arr[end]){
        //     arr[str] = arr[str]^arr[end];
        //     arr[end] = arr[str]^arr[end];
        //     arr[str] = arr[str]^arr[end];
        // }
        char temp = arr[str];
        arr[str] = arr[end];
        arr[end] = temp;

        str+=1; end-=1;
        rev(arr,str,end);
    }
    void reverseString(vector<char>& s) {
        // int str =0;
        // int end = s.size()-1;
        // while(str <= end){
        //     // if(s[str] != s[end]){
        //     //     s[str] = s[str]^s[end];
        //     //     s[end] = s[str]^s[end];
        //     //     s[str] = s[str]^s[end];
        //     // }
        //     char temp = s[str];
        //     s[str] = s[end];
        //     s[end] = temp;

        //     str++;
        //     end--;
        // }

        rev(s,0,s.size()-1);
    }
};