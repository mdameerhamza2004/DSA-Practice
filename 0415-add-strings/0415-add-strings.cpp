class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";

        // Start from the last digit of both strings
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        int carry = 0;

        // Continue until both strings and carry are processed
        while (i >= 0 || j >= 0 || carry) {

            // Start with the carry
            int sum = carry;

            // Add digit from num1 if available
            if (i >= 0)
                sum += num1[i--] - '0';

            // Add digit from num2 if available
            if (j >= 0)
                sum += num2[j--] - '0';

            // Store the last digit of the sum
            ans += (sum % 10) + '0';

            // Update carry for the next iteration
            carry = sum / 10;
        }

        // Digits were added in reverse order, so reverse the answer
        reverse(ans.begin(), ans.end());

        return ans;
    }
};