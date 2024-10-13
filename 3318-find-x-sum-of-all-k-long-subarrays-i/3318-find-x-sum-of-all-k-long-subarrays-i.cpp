class Solution {
public: 
    
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int i=0;
        int j=0;
        unordered_map<int,int>mp;
        
          while(j<nums.size()){
              mp[nums[j]]++;
             if(j-i+1==k){
                priority_queue<pair<int,int>>max;
                 for(auto l:mp){
                  max.push({l.second,l.first});
                 }
                 int temp=0;
                 int sum=0;
                 while(!max.empty()&&temp<x){
                   sum=sum+(max.top().first)*(max.top().second);
                     temp++;
                     max.pop();
                 }
                 ans.push_back(sum);
                 mp[nums[i]]--;
                 i++;
             }
              j++;
              
          }
        return ans;
    }
};