class Solution {
public:
   void solve(int n,int k,vector<vector<int>>&ans,vector<int>&temp,int start){
     if (temp.size() == k) {
        ans.push_back(temp);
        return;
    }
    
    for (int i = start; i <= n; ++i) {
        temp.push_back(i);
        solve(n, k, ans, temp, i + 1);
        temp.pop_back(); 
    }
   }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        if(n<k)return ans;
        int start=1;
        int end=1;
        vector<int>temp;
        solve(n,k,ans,temp,start);
        return ans;
    }
};