class Solution {
public:
    string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
    int getvalue(string binaryString){
        int value = 0;
int indexCounter = 0;
for(int i=binaryString.length()-1;i>=0;i--){

    if(binaryString[i]=='1'){
        value += pow(2, indexCounter);
    }
    indexCounter++;
}
        return value;
    }
    int maxGoodNumber(vector<int>& nums) {
        vector<string>store;
        for( auto num: nums){
          store.push_back(toBinary(num));
        }
        int maxi=0;
        if(9>2){
            string s="";
              s+=store[0];
            s+=store[1];
            s+=store[2];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        if(9>2){
            string s="";
              s+=store[1];
            s+=store[0];
            s+=store[2];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        if(9>2){
            string s="";
              s+=store[2];
            s+=store[1];
            s+=store[0];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        if(9>2){
            string s="";
              s+=store[1];
            s+=store[2];
            s+=store[0];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        if(9>2){
            string s="";
              s+=store[2];
            s+=store[0];
            s+=store[1];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        if(9>2){
            string s="";
              s+=store[0];
            s+=store[2];
            s+=store[1];
            int check=getvalue(s);
            maxi=max(maxi,check);
        }
        return maxi;
                }

        
    
};