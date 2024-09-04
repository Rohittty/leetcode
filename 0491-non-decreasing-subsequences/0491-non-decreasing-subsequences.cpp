class Solution {
public:
    bool check(vector<int> & ds){

for(int i=0;i<ds.size()-1;i++){

if(ds[i]>ds[i+1])
    return false;
}
        return true;
    }
    
    void solve(vector<vector<int>> & ans,vector<int> & nums,int ind,vector<int>& ds){

if(ds.size()>=2){

    ans.push_back(ds);

}
        unordered_set<int>rohit;
         for(int i=ind;i<nums.size();i++){
             if((ds.empty()||nums[i]>=ds.back()) && rohit.find(nums[i])==rohit.end()){
        
        
        ds.push_back(nums[i]);
        solve( ans,nums,i+1,ds);
        ds.pop_back();
                 rohit.insert(nums[i]);
             }
    }


}
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int> ds;
        int ind=0;
        solve(ans,nums,ind, ds);
        return ans ;
    }
};