class Solution {
public:
    int climbStairs(int n) {
          if(n==1||n==2){
          return n;
              
          }
        if(n==3){
           return 3;
        }
        int a=1;
        int b=2;
        int c=3;
        int d=0;
        for(int i=4;i<=n;i++){
         d=c+b;
            b=c;
            c=d;
            
}
        return d;
    }
};