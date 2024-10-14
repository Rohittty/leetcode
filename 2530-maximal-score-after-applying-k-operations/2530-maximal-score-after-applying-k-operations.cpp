class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
      long long sum=0;
       priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int a=0;
        while(k--){
         sum=sum+pq.top();
            
             int a = pq.top()/3 + ( (pq.top()%3==0) ? 0 : 1 );
           
            pq.pop();
              pq.push(a);
           
        }
        return sum;
    }
};