class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; long long int j=0; long long int sum=0; long long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mp[nums[i]]++; 
            if(i-j+1==k)
            {
                if(mp.size()==k) ans=max(ans,sum);
                sum-=nums[j]; 
                mp[nums[j]]--;
                if(mp[nums[j]]==0) mp.erase(nums[j]);
                j++;
            }
        }
        return ans;
    }
};