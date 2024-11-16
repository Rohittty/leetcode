class Solution {
public:
    int solve(int i,int j,vector<int>&nums){
         int key=0;
        for(int k=i;k<=j-1;k++){
           if(nums[k]>=nums[k+1]||nums[k]+1<nums[k+1]){
               key=1;
               break;
               
           }
        }
        if(key!=0)return -1;
        return nums[j];
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int i=0;
        int j=0;
        while(j<nums.size()){
            
            if(j-i+1==k){
                cout<<i<<j;
            int h= solve(i,j,nums);
                ans.push_back(h);
                i++;
                
            }
            else{
             j++;
            }
        }
        return ans;
    }
};