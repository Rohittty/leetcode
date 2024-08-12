class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>maxh;
        int n=nums.size();
    
        for(int i=0;i<n;i++){
        maxh.push(nums[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
        }
        return maxh.top();
    }
};