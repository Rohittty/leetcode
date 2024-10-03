class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
     int sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)sum=(sum+nums[i])%p;
        int target=sum%p;
        if(target==0)return 0;
        unordered_map<int,int>mo;
        mo[0]=-1;
        int curr=0;
        int mini=n;
        for(int j=0;j<n;j++){
            curr=(curr+nums[j])%p;
            int find=(curr-target+p)%p;
            if(mo.find(find)!=mo.end()){
               mini=min(mini,j-mo[find]);
            }
            mo[curr]=j;
        }
        if(mini==n)return -1;
        return mini;
    }
};