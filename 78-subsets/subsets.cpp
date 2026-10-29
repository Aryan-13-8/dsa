class Solution {
public: 
     void sol(vector<int>& nums,vector<int>&ds,vector<vector<int>>&ans, int i, int n){
        if(i>=n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        sol(nums,ds,ans,i+1,n);
        ds.pop_back();
        sol(nums,ds,ans,i+1,n);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        sol(nums,ds,ans,0,n);
        return ans;
    }
};