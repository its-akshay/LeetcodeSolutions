class Solution {
public:
    int beautySum(string s) {
        unordered_map<char,int>mp;
        int sum = 0;
        int n = s.length();
        for(int i=0;i<s.length();i++){
            for(int j = i;j<n;j++){
            mp[s[j]]++;
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(auto it:mp){
                maxi = max(it.second,maxi);
                mini = min(it.second,mini);
            }
            sum+= (maxi-mini);    
                
            }
            mp.clear();
        }
        return sum;
    }
};