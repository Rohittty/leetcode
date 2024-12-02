class Solution {
public:
    int isPrefixOfWord(string sen, string sea) {
     int cs=1;
       int j=0;
        for(int i=0;i<sen.size();i++){
             if(sen[i]==' ')cs++;
          if(sen[i]==sea[j])j++;
            else
                j=0;
            cout<<i<<j<<endl;
            if(j==sea.length() && (i-sea.length()+1==0||sen[i-j]==' ')){
                  return cs;
            
            }
           
        }
        return -1;
        
    }
};