class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    
        int n = s.length();
        int m = p.length();
        vector<int>ans;
        if (n < m) return ans;

        // Frequency arrays to count characters
        vector<int> s1f(26, 0);  // Frequency array for s1
        vector<int> s2f(26, 0);  // Sliding window frequency array for s2

        // Fill the frequency array for s1
        for (char &ch : p) {
            s1f[ch - 'a']++;
        }

        int i = 0, j = 0;

        // Traverse s2 using a sliding window of size n
        while (j < n) {
            // Add the current character in s2 to the window frequency
            s2f[s[j] - 'a']++;

            // When the window size matches s1 size, check for the permutation
            if (j - i + 1 == m) {
                if (s1f == s2f) ans.push_back(i);  // If both frequency arrays match, it's a permutation

                // Shrink the window from the left by removing the character at `i`
                s2f[s[i] - 'a']--;
                i++;  // Move the left pointer of the window
            }
            j++;  // Move the right pointer of the window
        }
        return ans;      
    }
};