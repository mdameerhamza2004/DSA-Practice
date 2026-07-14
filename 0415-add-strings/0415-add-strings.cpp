class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int n = num1.length();
        int m = num2.length();
        int carry =0;

        int i = n-1;
        int j= m-1; 
        while(i>=0 or j>=0 or carry >0){
            int n1 = i<0? 0:num1[i]-'0';
            int n2 = j<0? 0:num2[j]-'0';

            int add = n1+n2+carry;
            carry = add/10; // calculate the carry 
            add = add%10; // convert regulor 1 to digit number

            ans += add+'0';
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};