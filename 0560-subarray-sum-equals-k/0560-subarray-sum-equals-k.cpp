class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), res = 0;

        // hash map to store the prefix sums count that are been encountered
        unordered_map<int, int> u = {{0, 1}};
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int req = sum - k;
            res += u[req];
            u[sum]++;
        }

        return res;
    }
};