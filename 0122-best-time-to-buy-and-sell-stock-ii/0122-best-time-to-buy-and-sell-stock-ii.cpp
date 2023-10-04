class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<int>curr(2,0);
        vector<int>prev(2,0);
        curr[0]=curr[1]=0;
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                long profit = 0;
                if(buy==0){
                    profit = max (curr[0],-nums[ind] +curr[1]);
                }
                if(buy==1){
                    profit = max (curr[1],nums[ind]+curr[0]);
                }
                 prev[buy] = profit;
            }
            curr = prev;
        }
        
        return curr[0];
    }
};