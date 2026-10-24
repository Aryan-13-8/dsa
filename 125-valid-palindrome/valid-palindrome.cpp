class Solution {
public:
    bool check(const string& s , int i, int n){
        if(i>n){
            return true;
        }
        if(!isalnum (s[i])){
            return check(s,i+1,n);

        }
        if(!isalnum(s[n])){
            return check(s,i,n-1);

        }
        
        if(tolower(s[i])!=tolower(s[n])){
            return false;
        }
        return check(s,i+1,n-1);
    }
    bool isPalindrome(string s) {
        int n=s.size()-1;
        return check(s,0,n);

    }
};