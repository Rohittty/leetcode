class Solution {
public:
    int minSwaps(vector<int>& nums) {
    
    int totalones=0;
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
       if(nums[i]==1){
        totalones++;
       } 
    }
    int i=0;
    int j=0;
    int count1=0;
    int maxcount=0;
    while(j<2*n){
      if(nums[j%n]==1){
        count1++;
      }
     
     if(j-i+1>totalones){
           count1=count1-nums[i%n];
           i++;
      }
      maxcount=max(count1,maxcount);
      j++;
    }
    return totalones-maxcount;

    }
};