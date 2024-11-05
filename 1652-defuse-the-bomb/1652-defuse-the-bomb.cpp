class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int n=code.size();
       if(k>0){
        for(int i=0;i<n;i++){
            int sum=0;
            for(int t=1;t<=k;t++){
                sum+=code[(i+t)%n];            
            }
            ans.push_back(sum);     
        }
       }
        if(k<0){
            int l=abs(k);
            for(int i=0;i<n;i++){
                int sum=0;
                for(int t=0;t<l;t++){
                    sum+=code[(i+n-1-t)%n];

                }
                ans.push_back(sum);
            }
        }
        if(k==0){
            vector<int>c(n,0);
            return c;
        }
        return ans;
    }
};
