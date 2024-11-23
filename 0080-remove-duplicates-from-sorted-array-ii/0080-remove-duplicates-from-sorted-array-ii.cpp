class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto it:mp){
            if(it.second>=2){
              ans.push_back(it.first);
                 ans.push_back(it.first);
            }
            else
                ans.push_back(it.first);
        }
        nums=ans;
        return ans.size();
    }
};