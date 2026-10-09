class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int low=1;
        int high=maxi;
        
        int mini=INT_MAX;

        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0; i<nums.size(); i++){
                int ans=(nums[i]+mid-1)/mid;
                sum=sum+ans;
            }
            if(sum<=threshold){
               mini=min(mid,mini);
               high=mid-1; 
            }
            else{
                
                low=mid+1;
            }
        }
        return mini;

    }
};