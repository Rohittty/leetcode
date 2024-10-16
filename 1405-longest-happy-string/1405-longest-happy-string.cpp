class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        pq.push({a,'a'});
        pq.push({b,'b'});
        pq.push({c,'c'});
        
        string s="";
        while(pq.size()){
            if(pq.top().first==0)break;
        int x=pq.top().first,size=s.size();
        char  y=pq.top().second;
        pq.pop();
        if(size>=2&& s[size-1]==s[size-2]&&s[size-1]==y){
        int occ=pq.top().first;
        char val=pq.top().second;
        pq.pop();
        if(occ==0)break;
        s=s+val;
        occ--;
        pq.push({occ,val});
        }
        else{
            s=s+y;
            x--;
        }
        pq.push({x,y});
        }
        return s;

    }
};