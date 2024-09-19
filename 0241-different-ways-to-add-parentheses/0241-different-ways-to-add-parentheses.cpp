class Solution {
public:
vector<int> solve(string s){
    vector<int> result;
    for(int i=0;i<s.size();i++){
if(s[i]=='+'||s[i]=='-'||s[i]=='*'){
    vector<int> leftresult=solve(s.substr(0,i));
   vector<int>rightresult=solve(s.substr(i+1));
     for(int & x:leftresult){
for(int &j:rightresult){
    if(s[i]=='+'){
     result.push_back(x+j);
}
    else if(s[i]=='-'){
 result.push_back(x-j);
    }
    else{
        result.push_back(x*j);
    }
}
}
}

}
 if(result.empty()){
     result.push_back(stoi(s));
 }   
    return result;
}
    vector<int> diffWaysToCompute(string s) {
       return solve(s); 
    }
};