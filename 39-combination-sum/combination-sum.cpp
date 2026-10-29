class Solution {
public: 
     void sum(vector<int>& candidates, int target,vector<int>&ds, int i, int n,vector<vector<int>> &ans){
        
            if(target==0){
                ans.push_back(ds);
                return ;
            }
            if(i>=n||target<0){
                return;
            }
            
        ds.push_back(candidates[i]);
        sum(candidates,target-candidates[i],ds,i,n,ans);
        ds.pop_back();
        sum(candidates,target,ds,i+1,n,ans);
        return ;

     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        int i=0;
        int n=candidates.size();
        vector<vector<int>> ans;
        int x=target;
        sum(candidates, target,ds,0,n,ans);
         return ans;

    }
};