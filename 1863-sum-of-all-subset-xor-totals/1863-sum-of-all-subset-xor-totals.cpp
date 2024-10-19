class Solution {
public:
      int sum=0;
       int fun(vector<int>&op){
   int ik=0;
           for(auto nums: op){
          ik=ik^nums;
           }
           return ik;
       }
      void help(vector<int> & nums,vector<int>&op,int idx){
          if(idx>=nums.size()){
              sum+=fun(op);
              return;
          }
          op.push_back(nums[idx]);
          help(nums,op,idx+1);
          op.pop_back();
          help(nums,op,idx+1);
          
      }
    int subsetXORSum(vector<int>& nums) {
        sum=0;
        vector<int>op;
        help(nums,op,0);
        return sum;
    }
};