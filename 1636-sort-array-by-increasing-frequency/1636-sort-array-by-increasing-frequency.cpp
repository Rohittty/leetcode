 bool cmp(pair<int,int> a,pair<int,int>b){
      if(a.second==b.second)return a.first>b.first;
        return a.second<b.second;
}


class Solution {
public:
   
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
           v.push_back(it);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++){
          for(int j=0;j<v[i].second;j++)
              {
              ans.push_back(v[i].first);
              
        }    
        }
        return ans;
        
    }
};
