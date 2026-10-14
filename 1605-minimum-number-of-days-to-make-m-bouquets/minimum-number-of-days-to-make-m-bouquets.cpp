class Solution {
public:
     int possible(vector<int>&bloomDay,int day ,long long m, long long k ){
        long long count=0;
        long long possibleb=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                possibleb+=count/k;
                count=0;
            }
        }
        possibleb+=count/k;
        return possibleb;
     }
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        int ans=-1;
        int n=bloomDay.size();
        long long low= *min_element(bloomDay.begin(), bloomDay.end());
        long long high=*max_element(bloomDay.begin(), bloomDay.end());
        if(n<m*k){ return -1;}
        while(low<=high){
            
            int mid=(low+high)/2;
            if(possible(bloomDay,mid, m, k)>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
        
    }
};