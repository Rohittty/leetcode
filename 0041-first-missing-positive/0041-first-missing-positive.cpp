class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int maxi=1;
        unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
         if(nums[i]>0){
     maxi=max(nums[i],maxi);
}
        mp[nums[i]]++;
    
    }   
        for(int i=1;i<=maxi;i++){
          if(mp.find(i)==mp.end()){
               return i;
          }

        }
        return maxi+1;;
        
    }
};