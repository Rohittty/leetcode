class Solution {
public:
    int findNumberOfLIS(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n, 1), count(n, 1);
        int len = 1, ans = 0;
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[i] <= a[j]) continue;
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    count[i] = count[j]; // current total = previous.
                } else if (dp[i] == dp[j] + 1) {
                    count[i] += count[j];
                }
                len = max(len, dp[i]);
            }
        }        
        for (int i = 0; i < n; i++) {
            if (dp[i] == len)
                ans += count[i];
        }
        return ans;
    }
};