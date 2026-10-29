class Solution {
public:
     void sol(vector<int>& candidates, int target,vector<int>&ds,vector<vector<int>>& ans,int n, int i){
       
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(i>=n||target<0){
            return;
        }
        ds.push_back(candidates[i]);
        sol(candidates,target-candidates[i],ds,ans,n,i+1);
        ds.pop_back();
        while (i + 1 < n && candidates[i] == candidates[i + 1]) {
    i++;
}
        sol(candidates,target,ds,ans,n,i+1);
     }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>> ans;
        int n= candidates.size();
        int i=0;
        sol(candidates,target,ds,ans,n,0);
        return ans;
    }
};