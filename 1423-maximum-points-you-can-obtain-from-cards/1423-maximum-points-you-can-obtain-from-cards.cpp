class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxsum=0;
        int lsum=0;
        int rsum=0;
        for(int i=0;i<k;i++){
       lsum=lsum+cardPoints[i];
        }
        maxsum=lsum;
        int j=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
           lsum=lsum-cardPoints[i];
             rsum=rsum+cardPoints[j];
            maxsum=max(maxsum,lsum+rsum);
            j--;
            
        }
        return maxsum;
    }
};