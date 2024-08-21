class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double preff = 1;
        double suff = 1;
        double ans = INT_MIN;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (preff == 0) preff = 1;
            if (suff == 0) suff = 1;
            preff *= nums[i];
            suff *= nums[n - i - 1];
            ans = max(ans, max(preff, suff));
        }
        
        return (int)ans;
    }
};
