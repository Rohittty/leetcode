class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
  int sum=0;
        for(int i=0;i<rolls.size();i++){
       sum=sum+rolls[i];
}
        int divide=rolls.size()+n;
        int r=divide*mean;
        int remainingSum=r-sum;
        if(remainingSum<n||remainingSum>6*n)return {};
        vector<int>result(n,remainingSum/n);
        int remainder=remainingSum%n;
        for(int i=0;i<remainder;i++){
        result[i]++;
}
        return result;
    }
};