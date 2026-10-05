class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int z;
        int n= nums.size();
        int low=0;
        int high =n-1;
        if(nums[0]>target){
            return 0;
        }
        if(nums[high]<target){
            return high+1;
        }
        while(low<=high){
            
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                 z=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }

        };
        return z;
        
    }
};