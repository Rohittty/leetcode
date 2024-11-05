class Solution {
public:
    int minChanges(string s) {
        
        int mini=0;
        for(int i=1;i<s.size();i++){
          if(s[i-1]!=s[i])mini++;
                 
            i++;
        }
        return mini;
            
        
    }
};