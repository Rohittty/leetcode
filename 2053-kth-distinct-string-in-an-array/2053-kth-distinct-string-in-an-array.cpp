class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      unordered_map<string,int> mp;
        for(auto& r:arr){
            mp[r]++;

        }
        for(auto it:arr){
            if(mp[it]==1){
                k--;
            }
            if(k==0){
                return it;
            
            }
        }
        return "";

    }
};