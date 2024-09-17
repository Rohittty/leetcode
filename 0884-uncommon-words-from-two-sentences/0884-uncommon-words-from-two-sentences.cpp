class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
           unordered_map<string,int> mp;
        vector<string>ans;
        string s="";
        for(int i=0;i<s1.size();i++){
      if(s1[i]==' '){
          mp[s]++;
          s.clear();
      }
            else
s.push_back(s1[i]);
}
        mp[s]++;
        s.clear();
          for(int i=0;i<s2.size();i++){
      if(s2[i]==' '){
          mp[s]++;
          s.clear();
      }
              else
s.push_back(s2[i]);
}
        mp[s]++;
        for(auto it: mp){
          if(it.second==1){
              ans.push_back(it.first);
          }
        }
        return ans;
    }
};