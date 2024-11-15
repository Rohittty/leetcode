class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        ios_base ::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        int n = arr.size();

        int left = 0;
        while (left < n - 1 && arr[left] <= arr[left + 1]) {
            left++;
        }

        if (left == n - 1)
            return 0;

        int right = n - 1;
        while (right > 0 && arr[right] >= arr[right - 1]) {
            right--;
        }

        int result = min(n - left - 1, right);

        int i = 0, j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                result = min(result, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};