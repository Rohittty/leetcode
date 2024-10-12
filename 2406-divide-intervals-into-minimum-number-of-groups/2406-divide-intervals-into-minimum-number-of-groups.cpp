class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
      priority_queue<int,vector<int>,greater<int>>pq;
        sort(intervals.begin(),intervals.end());
        for(auto nums:intervals){
             if(!pq.empty()&&pq.top()<nums[0])pq.pop();
            pq.push(nums[1]);
        }
        return pq.size();
    }
};