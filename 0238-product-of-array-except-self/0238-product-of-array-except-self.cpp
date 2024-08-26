class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>ans;
        long long int r=1;
        int count =0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=0){
      r=r*nums[i];
            }
            else{
         count++;
}
}
         cout<<count;
        for(int i=0;i<nums.size();i++){
            if(count>1){
                ans.push_back(0);
                
 }
            else if(count==1){
                if(nums[i]==0){
                   ans.push_back(r);
                }
                else
                    ans.push_back(0);
            }
            else
                ans.push_back(r/nums[i]);
            
}
        return ans;
    }
};