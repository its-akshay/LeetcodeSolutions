class Solution {
public:
    int solve(vector<int>&weights,int cap){
        int days = 0;
        int load =0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                load = weights[i];
                days++;
            }
            else{
                load+=weights[i];
            }
        }
        return days+1;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            int x = solve(weights,mid);
            if(x<=days){
                high = mid-1;
            }
            else{
                low = mid+1;             
            }
        }
        return low; 
    }
};