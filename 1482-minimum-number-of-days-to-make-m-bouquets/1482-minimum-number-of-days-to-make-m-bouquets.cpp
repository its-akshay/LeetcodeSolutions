class Solution {
public:
    bool possible(vector<int>&arr,int day,int m,int k){
        int count = 0;
        int no = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                no+=(count/k);
                count=0;
            }
        }
        no+=(count/k);
        return no>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(m*1LL*k*1LL>n){
            return -1;
        }
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = low+(high-low)/2;
            bool curr = possible(bloomDay,mid,m,k);
            if(curr){
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};