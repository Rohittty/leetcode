class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        unordered_map<long long , int>premap;
        premap[0]=1;
        int preSum =0;
        for(int i=0;i<n;i++){
            preSum = (preSum+nums[i])%k;

            int target = (preSum+k)%k;

            if(premap.find(target)!=premap.end()){
                count+=premap[target];
            }

            premap[target]++;
        }
        return count;
    }
};