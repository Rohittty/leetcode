class Solution {
public:
    int ans=-1;
        void help(vector<int>& nums,unordered_map<int,int>& mp,int k,int i){
          if(i>=nums.size()){
              ans++;
              return;
          }
            help(nums,mp,k,i+1);
            if(!mp[nums[i]-k]&&!mp[nums[i]+k]){
             mp[nums[i]]++;
                help(nums,mp,k,i+1);
                mp[nums[i]]--;
            }
            
        }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        help(nums,mp,k,0);
        return ans;
    }
};