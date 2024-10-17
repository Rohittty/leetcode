class Solution {
public:
    int maximumSwap(int num) {
        int g=num;
        string ans="";
        while(num!=0){
        int r=num%10;
            
            ans.push_back(r+'0');
            num=num/10;
            
        }
        int k=0;
        int idx=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
             int maxi=0;
            for(int j=i+1;j<ans.size();j++){
                maxi=max(ans[j]-'0',maxi);
                
            }
            if(maxi>ans[i]-'0'){
                k=maxi;
                idx=i;
                break;
            }
        }
        int op=0;
        if(k==0)return g;
        for(int i=0;i<ans.size();i++){
              if(idx<i&&ans[i]-'0'==k){
                  op=max(op,i);
                 
              }
        }
    
        
    
        swap(ans[idx],ans[op]);
        int r=stoi(ans);
        
        return r;
    }
};