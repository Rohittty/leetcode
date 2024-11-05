class Solution {
public:
    bool isBalanced(string num) {
        int sumeven=0;
        int sumodd=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                sumeven+=num[i]-'0';
            }
            else{
                sumodd+=num[i]-'0';
            }
        }
        
        return sumeven==sumodd;
    }
};