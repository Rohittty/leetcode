class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
      vector<int> op;
        unordered_map<int,int>mp;
        for(auto it:banned)mp[it]++;
        int ans=0;
        for(int i=1;i<=n;i++){
           if(mp.find(i)!=mp.end())continue;
            op.push_back(i);
        }
        int i=0;
        int j=0;
        int sum=0;
        while(j<op.size()){
          sum=sum+op[j];
            if(sum<=maxSum){
                ans=max(j-i+1,ans);
            }
            else{
                sum-=op[i];
                i++;
            }
            j++;
        }
        return ans;
    }
};