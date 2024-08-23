class Solution {
public:
    string fractionAddition(string expr) {
        int neum=0;
        int deno=1;
        int i=0;
        int n=expr.size();
        while(i<n){
      int currnum=0;
        int currdeno=0;
    bool sign=(expr[i]=='-');
            if(expr[i]=='+'||expr[i]=='-'){
               i++;
            }
        while(i<n&&isdigit(expr[i])){
         int val=expr[i]-'0';
            currnum=(currnum*10)+val;
            i++;


}    
            i++;
            if(sign==true){
              currnum*=-1;  
            }
             while(i<n&&isdigit(expr[i])){
         int val=expr[i]-'0';
            currdeno=(currdeno*10)+val;
            i++;


}    
            neum=neum*currdeno+deno*currnum;
          deno=deno*currdeno;   
            

}
        int GCD=abs(gcd(neum,deno));
        neum/=GCD;
        deno/=GCD;
        
        return to_string(neum)+"/"+to_string(deno);
    }
};