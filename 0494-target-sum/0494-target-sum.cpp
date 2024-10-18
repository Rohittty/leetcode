class Solution {
    public:
    int ans=0;

    void help(vector<int>&nums,int idx,int target,int temp){
      if(idx==nums.size()){
        if(target==temp)ans++;
          return;
      }
        help(nums,idx+1,target,temp+nums[idx]);
        help(nums,idx+1,target,temp-nums[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
         ans=0;
         help(nums,0,target,0);
        return ans;
    }
};