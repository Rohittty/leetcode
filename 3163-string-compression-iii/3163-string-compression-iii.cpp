class Solution {
public:
    string compressedString(string word) {
       string comp="";
        
        if(word.empty())return comp;
        int n=word.length();
         int count=1;
        for(int i=1;i<=n;i++){
           if(word[i-1]==word[i]){
               count++;
               if(count>=9) {
                   comp.push_back(count+'0');
                   comp.push_back(word[i-1]);
                   count=1;
                   i++;
                   
               }
               
           }
            else{
                
                comp.push_back(count+'0');
                   comp.push_back(word[i-1]);
                   count=1;
                
                
            }
        }
        return comp;
        
    }
};