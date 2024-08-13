class Solution {
public:
    void solve(int target,int idx,vector<int>& input,vector<int>& ds,vector<vector<int>>&ans,int &k){
        if(target<0)
        return;
        if(target==0&&ds.size()==k){
         ans.push_back(ds);
}
        for(int i=idx;i<input.size();i++){
        if(ds.size()<k){
            if(input[i]>0&&input[i]<=9){
         ds.push_back(input[i]);
            solve(target-input[i],i+1,input,ds,ans,k);
            ds.pop_back();
}

}
        }
        
        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int target=n;
        vector<int>input;
     vector<vector<int>>ans;
        vector<int>ds;
        int idx=0;
        for(int i=1;i<=n;i++){
           input.push_back(i); 
        }
        solve (target,0,input,ds,ans,k);
        return ans;
    }
};