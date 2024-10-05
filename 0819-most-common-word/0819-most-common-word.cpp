class Solution {
public:
    string mostCommonWord(string para, vector<string>& banned) {
       unordered_map<string,int>mp;
        string s="";
        for(int i=0;i<para.size();i++){
              if(para[i]>='a'&&para[i]<='z'||para[i]>='A'&&para[i]<='Z'){
              s.push_back(tolower(para[i]));

            }
            
            else if(para[i]==' '||i==para.size()-1||para[i]==','||para[i]=='.'){
                if(!s.empty())
                 mp[s]++;
                 s.clear();
             }
          
            
        }
        unordered_set<string>rohit;
        for(string &s:banned ){
             rohit.insert(s);
        }
        int maxi=0;
        for(auto it:mp){
          if(rohit.find(it.first)!=rohit.end())continue;
            else{
                maxi=max(maxi,it.second);
            }
        }
        cout<<maxi;
        for(auto it:mp){
            if(rohit.find(it.first)!=rohit.end())continue;
            if(it.second==maxi)s=it.first;
        }
        return s;
    }
};