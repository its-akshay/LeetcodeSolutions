class Solution {
public:
    int solve(int ind,string &s,vector<int>&dp){
        if(ind==0||ind==-1){
            return 1;
        }
        if(ind<-1){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int count = 0;
        if(s[ind]!='0'){
            count = solve(ind-1,s,dp);
        }
        int num = (s[ind-1]-'0')*10+(s[ind]-'0');
        if(ind>0){
            if(num<=26&&num>=10){
                count+=solve(ind-2,s,dp);
            }
        }
        dp[ind] = count;
        return count;
    }
    int numDecodings(string s) {
        if(s[0]=='0'){
            return 0;
            
        }
        int n = s.length();
        vector<int>dp(n+1,-1);
        return solve(n-1,s,dp);
    }
};