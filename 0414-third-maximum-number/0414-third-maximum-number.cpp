class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                
                 mp[nums[i]]++;
           pq.push(nums[i]);
               if(pq.size()>3){
              pq.pop();
            } 
            }
    }
        if(pq.size()==2){
          pq.pop();
        }
        return pq.top();
    }
};