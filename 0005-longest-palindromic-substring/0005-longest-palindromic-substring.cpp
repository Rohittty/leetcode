class Solution {
public:
    bool palindrome(string &s, int i, int j){
        if(i>=j) return true;
        else if(s[i]==s[j]) return palindrome(s,i+1,j-1);
        else return false;
    }
    string longestPalindrome(string s) {
        int max_len=INT_MIN, start=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(palindrome(s,i,j)==true){
                    if(j-i+1 > max_len){
                        max_len=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,max_len);
    }
};