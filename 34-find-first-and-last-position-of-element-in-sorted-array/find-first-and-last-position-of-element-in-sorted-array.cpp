class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lowest=-1;
        int highest=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                lowest=mid;
                high=mid-1;
            }
            else if (nums[mid]>target){
                high=mid-1;
            }
            else{ 
                low=mid+1;
            }
        }
         low=0;
         high=n-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                highest=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{ 
                low=mid+1;
            }
        }
        return {lowest, highest};
        
    }
};