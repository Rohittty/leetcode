class Solution {
public:
    char findKthBit(int n, int k) {
        string s1 = "0", s2 = "";

        for (int i = 0; i < 20; i++) {
            string invert = "";

            for (int i = 0; i < s1.size(); i++) {
                s1[i] == '0' ? invert += '1' : invert += '0';
            }

            reverse(invert.begin(), invert.end());
            s2 = s1 + "1" + invert;
            s1 = s2;
        }
        return s2[k - 1];
    }
};