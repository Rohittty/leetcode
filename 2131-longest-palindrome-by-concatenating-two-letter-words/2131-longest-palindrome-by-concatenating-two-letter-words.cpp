class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        for(string&word:words){
         mp[word]++;
        }
        bool center=false;
        int result=0;
        for(string&word:words){
           string rev=word;
            reverse(rev.begin(),rev.end());
            if(rev!=word){
               if(mp[word]>0&&mp[rev]>0){
                 result+=4;
                   mp[word]--;
                   mp[rev]--;
               }
            }
            else{
                if(mp[word]>=2){
                  result+=4;
                    mp[word]=mp[word]-2;
                }
                else if(mp[word]==1&&center==false){
                    mp[word]--;
                    result=result+2;
                    center=true;
                 }
            }
        }
        return result;
    }
};