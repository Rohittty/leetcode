class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size() == 1 || nums.size() == 2)return true;
        int prev = 0; 
        for(auto num : nums){
           if(prev + num >= m)return true;
           prev = num;
        }
        return false;
    }
};