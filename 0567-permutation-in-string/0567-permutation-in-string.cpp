class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if (n > m) return false;  // If s1 is longer than s2, no permutation is possible.

        // Frequency arrays to count characters
        vector<int> s1f(26, 0);  // Frequency array for s1
        vector<int> s2f(26, 0);  // Sliding window frequency array for s2

        // Fill the frequency array for s1
        for (char &ch : s1) {
            s1f[ch - 'a']++;
        }

        int i = 0, j = 0;

        // Traverse s2 using a sliding window of size n
        while (j < m) {
            // Add the current character in s2 to the window frequency
            s2f[s2[j] - 'a']++;

            // When the window size matches s1 size, check for the permutation
            if (j - i + 1 == n) {
                if (s1f == s2f) return true;  // If both frequency arrays match, it's a permutation

                // Shrink the window from the left by removing the character at `i`
                s2f[s2[i] - 'a']--;
                i++;  // Move the left pointer of the window
            }
            j++;  // Move the right pointer of the window
        }
        
        return false;
    }
};