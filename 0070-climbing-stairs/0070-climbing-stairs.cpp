class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        //we are here finding the distinct number of solutions actually
        //so here by assigning the value as 1 we mean that 
        if(n==0||n==1){
            return 1;
        }
        dp[2] = 2;
        dp[1] = 1;
        
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};