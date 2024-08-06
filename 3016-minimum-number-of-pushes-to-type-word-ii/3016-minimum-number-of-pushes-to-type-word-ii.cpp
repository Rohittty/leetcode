class Solution {
public:
    int minimumPushes(string word) {
        int sum=0;
        vector<int>freq(26,0);
        for(int i=0;i<word.size();i++){
      freq[word[i]-'a']++;
            
}
        sort(freq.begin(),freq.end());
        int j=0;
        int m=1;
        for(int i=25;i>=0;i--){
          sum=sum+m*freq[i];
            j++;
            if(j==8){
             j=0;
                m=m+1;
            }
            
}
        
    return sum;       
}
    
};