class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        long long maxi=*max_element(nums.begin(),nums.end());
        long long low=1;
        long long high=maxi;
        long long mini=INT_MAX;
        while(low<=high){
            long long mid=(low+high)/2;
            long long sum=0;
            for(int i=0;i<nums.size();i++){
                long long x=(mid+nums[i]-1)/mid;
                sum=sum+x;
            }
            if(sum<=h){
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