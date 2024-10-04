class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int rem=0;
        int count=0;
        for(auto num:nums){
          rem=num%3;
            if(rem==0){
              continue;
            }
            else if(rem==1){
                count++;
            }
            else if(rem==2){
               count++;
            }
        }
        return count;
    }
};