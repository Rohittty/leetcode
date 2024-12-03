class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       string ans="";
        int a=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<spaces.size()&&a==spaces[j]){
               ans.push_back(' ');
               j++;
           }
             ans.push_back(s[i]);
             a++;
           
        }
        return ans;
    }
};