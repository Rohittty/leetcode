class Solution {
public:
   
    int solve(vector<int>&nums,int idx,int maxi,int currmax){
       if(idx==nums.size()){
          if(currmax==maxi){
              return 1;
       }
           return 0;
       }
        
        int pick = solve(nums,idx+1,maxi,currmax|nums[idx]);
        int notpick = solve(nums,idx+1,maxi,currmax);
        return pick+notpick;
    }
    int countMaxOrSubsets(vector<int>& nums) {
       
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=maxi|nums[i];
        }
        
        int currmax=0;
       return  solve(nums,0,maxi,currmax);
        
        
    }
};