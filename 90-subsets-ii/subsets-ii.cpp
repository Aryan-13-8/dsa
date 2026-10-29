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
        while (i + 1 < n && nums[i] == nums[i + 1]) {
    i++;
}

        sol(nums,ds,ans,i+1,n);
     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        int n=nums.size();
        sol(nums,ds,ans,0,n);
         return ans;
    }
};