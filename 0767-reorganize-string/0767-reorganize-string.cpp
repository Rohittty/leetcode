class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>p;
        unordered_map<char,int>m;
        for( auto it:s){
            m[it]++;
        }
        for(auto it:m){
            cout<<it.second;
            p.push({it.second,it.first});
        }
        p.push({0,'z'});
        
        string k="";
        
        while(p.size()){
          if(p.top().first==0)break;
            int x=p.top().first,size=k.size();
            char y=p.top().second;
            p.pop();
            if(size>=1&&k[size-1]==y){
            int occ=p.top().first;
                if(occ==0)break;
                char val=p.top().second;
                p.pop();
                k+=val;
                cout<<k<<" ";
                occ--;
                p.push({occ,val});
                
       }
            else{
                k+=y;
                x--;
            }
            p.push({x,y});
        
        }
        if(k.size()!=s.size()){
           return "";
        }
        return k;
    }
};