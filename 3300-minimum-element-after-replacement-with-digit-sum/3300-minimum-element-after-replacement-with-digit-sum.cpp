class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto num:nums){
         int sum=digitsum(num);
            mini=min(mini,sum);
        }
        return mini;
    }
};