class Solution {
public:
    bool isHappy(int n) {
       
        unordered_set<int>st;
        while(n!=1){
             int sum=0;
           while(n>0){
           int digit=0;
               digit=n%10;
               int r=pow(digit,2);
              sum=sum+r;
               n=n/10;
               
}
            n=sum;
            if(st.find(n)!=st.end()){
            return false;

            }
            st.insert(n);
            
            

}
        return true;
    }
};