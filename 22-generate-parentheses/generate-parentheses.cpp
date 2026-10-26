class Solution {
public: 
      void total(int n, vector<string>&s, int open,int close,string&current){
            if(current.size()==2*n){
                s.push_back(current);
                return ;
            }
          
            if(open<n){
              current.push_back('(');
              total(n,s,open+1,close,current);
              current.pop_back();
            }  
            if(close<open){
                current.push_back(')');
                total(n,s,open,close+1,current);
                current.pop_back();
            }                 
      }

    vector<string> generateParenthesis(int n) {
        vector<string> s;
        string current="";
        total(n,s,0,0,current);
        return s;
    }
};