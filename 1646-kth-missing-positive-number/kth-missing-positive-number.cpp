class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            int value=arr[mid]-(mid+1);
            if(value<k){
                low=mid+1;
            }
             else{
                high=mid-1;
             }
               

        }
       
        
        return high+k+1;
        
    }
};