class Solution {
public:
    vector<string>result;
    void solve(string &ans,int open,int close,int n){
  if(n*2==ans.size()){
      result.push_back(ans);
  }
        if(open<n){

ans.push_back('(');
solve(ans,open+1,close,n);
    ans.pop_back();
}
 if(close<open){

ans.push_back(')');
solve(ans,open,close+1,n);
    ans.pop_back();
}


}
    
    vector<string> generateParenthesis(int n) {
     string ans="";
        int open=0;
        int close=0;
        solve(ans,open,close,n);
        return result;
    }
};