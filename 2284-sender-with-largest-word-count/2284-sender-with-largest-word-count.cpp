class Solution {
public:
    int countString(string s){
        int count=0;
        for(int i=0;i<s.size();i++){
          if(s[i]==' '||i==s.size()-1)count++;
        }
        return count;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>mp;
        int maxi=0;
        for(int i=0;i<senders.size();i++){
           int n=countString(messages[i]);
            mp[senders[i]]+=n;
        }
        for(auto it:mp){
         maxi=max(it.second,maxi);
        }
        cout<<maxi;
        vector<string>ans;
        for(auto it:mp){
      if(it.second==maxi)ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        
        return ans[ans.size()-1];
    }
};