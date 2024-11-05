class Solution {
public:
    string makeFancyString(string s) {
        int count =1;
        if(s.empty())return "";
        string k="";
        k.push_back(s[0]);
        for(int i=1;i<s.size();i++){
             if(s[i]==k.back()){
                 if(count>=2)continue;
                 count++;
                 k.push_back(s[i]);
    
        }
            else{
                count=1;
                k.push_back(s[i]);
            }
            
        }
        return k;
    }
};