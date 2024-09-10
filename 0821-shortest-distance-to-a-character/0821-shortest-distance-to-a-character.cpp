class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     vector<int>ans;
        vector<int>op;
        for(int i=0;i<s.size();i++){
          if(s[i]==c){
            ans.push_back(i);
          }       
            
        }
        
        for(int i=0;i<s.size();i++){
       int dist=INT_MAX;
            for(int j=0;j<ans.size();j++){
                dist=min(dist,abs(i-ans[j]));
                
            }
            op.push_back(dist);


}
        return op;
    }
};