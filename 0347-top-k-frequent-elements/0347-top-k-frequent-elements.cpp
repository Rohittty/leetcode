class Solution {
public:
     vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(auto i:nums) mp[i]++;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        int c = k;
        while(!pq.empty()) 
        {
            auto count = pq.top().first;
            auto elem = pq.top().second;
            pq.pop();
            if(c)  {
                ans.push_back(elem);
                    c--;
            }
            else break;
            
        }
        return ans;
    }
};