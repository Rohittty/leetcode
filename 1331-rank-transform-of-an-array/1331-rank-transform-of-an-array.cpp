class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res;
        if(arr.size()==0)return arr; 
        vector<int>help(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        int c=1;
        mp[arr[0]]=c;
        for(int i=1;i<arr.size();i++){
           if(arr[i-1]!=arr[i])c++;
            mp[arr[i]]=c;
        }
            for(int i=0;i<arr.size();i++){
                  res.push_back(mp[help[i]]);
            }
        return res;
    }
};