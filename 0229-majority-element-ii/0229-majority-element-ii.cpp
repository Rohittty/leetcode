class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
       if(nums.size()==1)return nums;
          int c1=0;
        int c2=0;
        int first=nums[0];
        int sec=nums[1];
        for(int i=0;i<nums.size();i++){
     if(first==nums[i]){
         c1++;
     }
            else if(sec==nums[i]){
          c2++;
}
            else if(c1==0){
                first=nums[i];
                c1++;
            }
            else if(c2==0){
              sec=nums[i];
                c2++;
            }
            else{
              c1--;
                c2--;
            }

}
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++){
   if(nums[i]==first){
         c1++;
   }
           else if(nums[i]==sec){
         c2++;
            }
        }
        if(c1>n/3){
          result.push_back(first);
        }
        if(c2>n/3){
      result.push_back(sec);
        }
        
        return result;;
    }
};