class Solution {
public:
      void swap1(vector<char>& s, int n, int i){
        if(i>n-i){
            return ;
        }
        swap(s[i],s[n-i]);
        return swap1(s,n,i+1);
      }
     
    void reverseString(vector<char>& s) {
         int n=s.size()-1;
         int i=0;
         return swap1(s, n,0);
    }
};