class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>mp(k,0);
        for(int i=0;i<arr.size();i++){
          int rem=(arr[i]%k+k)%k;
            mp[rem]++;
        }
        if(mp[0]%2!=0){
            return false;
        }
        for(int rem=1;rem<=k/2;rem++){
        int sum=k-rem;
            if(mp[sum]!=mp[rem])return false;
        }
        return true;
    }
};