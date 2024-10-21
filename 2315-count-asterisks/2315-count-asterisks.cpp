class Solution {
public:
    int countAsterisks(string s) {
     int pair=0;
        int ans=0;
        for(int i=0;i<s.length();i++){

           if(s[i]=='|'){
               pair++;
           }
            if(s[i]=='*'&&pair%2==0)ans++;
}
        return ans;
    }
};