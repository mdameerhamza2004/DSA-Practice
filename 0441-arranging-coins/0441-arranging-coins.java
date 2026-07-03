class Solution {
    public int arrangeCoins(int n) {
        int ans = -1;
        int str = 0;
        int end = n;

        while (str <= end) {
            int mid = str + (end - str) / 2;

            long sum = (long) mid * (mid + 1) / 2;

            if (sum <= n) {
                ans = mid;
                str = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
}