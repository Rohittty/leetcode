class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int cnt=0;
        int n=word.size();
        
        for(int i=0;i<n;i++){
            int cnt2=0;
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j] == 'o' || word[j] == 'u'){
                    mp[word[j]]++;
                }
                else{
                    cnt2++;
                }

                if(cnt2==k && mp.size()==5)cnt++;
            }
        }
        return cnt;
    }
};