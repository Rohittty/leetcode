class Solution {
public:   
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            auto [topValue,index]=pq.top();
            pq.pop();
            int newValue=topValue*multiplier;
            nums[index]=newValue;
            pq.push({nums[index],index});
        }
        return nums;
    }
};