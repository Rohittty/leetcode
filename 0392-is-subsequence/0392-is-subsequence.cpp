class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int k=0;
       int e=t.length()-1;
       int count=0;
        while(i<=e)
{
       if(s[k]==t[i]){
           count++;
           k++;

       }
       i++;
}  
if(count==s.length())  {
    return true;
}  
else {
return false;
 } 
    }
};