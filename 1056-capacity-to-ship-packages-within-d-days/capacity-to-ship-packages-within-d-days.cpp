class Solution {
public:
     int possible(vector<int>&weights, int days, int capacity){
        int sum=0;
        int day=1;
        for(int i=0; i<weights.size(); i++){
            if(sum+weights[i]>capacity){
                day+=1;
                sum=weights[i];
            }
            else{
                sum+=weights[i];
            }
               

        }
        if(day<=days){
            return true;
        }
        else { 
            return false;
            }
       
        }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int sum2=0;
        for(int i= 0; i<weights.size(); i++){
            sum2+=weights[i];
        }
        int high =sum2;
        int capacity=high;
        while(low<high){
            int mid=(low+high)/2;
            if(possible(weights,days,mid)==true){
                high=mid;
                capacity=mid;
            }
            else{ 
                low=mid+1;
            }
        }
         return capacity;
    }
};