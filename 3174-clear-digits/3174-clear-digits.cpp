class Solution {
public:
    string clearDigits(string s) {
      string ans="";
        for(int i=0;i<s.size();i++){
             if(s[i]-'0'>=0&&s[i]-'0'<=10){
                if(!ans.empty())ans.pop_back();   
             }
            else ans.push_back(s[i]);
        }
        return ans;
    }
};