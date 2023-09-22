class Solution {
public:
int prime = 1e9+7;
    int numDistinct(string s1, string s2) {
       int n = s1.size();
        int m = s2.size();
        // vector<vector<int>> dp(n+1,vector<int>(m+1,0));    
        vector<int>prev(m+1,0);
        prev[0] = 1;   
    for(int i=1;i<n+1;i++){
        for(int j=m;j>=1;j--){
            
            if(s1[i-1]==s2[j-1])
                prev[j] = (prev[j-1] + prev[j])%prime;
            else
                prev[j] = prev[j];
        }
    }    
    
    return prev[m];
        
    }
};