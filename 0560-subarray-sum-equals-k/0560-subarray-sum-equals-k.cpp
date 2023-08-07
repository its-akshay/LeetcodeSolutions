class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
          int n= A.size();
        // Complete the function
        int count = 1;
        int ans = 0;
        map<long long,int>mp;
       long long sum = 0;
       int maxLen = 0;
       for(int i=0;i<n;i++){
           sum+=A[i];
           if(sum==k){
            maxLen = max(maxLen,i+1);
               ans++;
           }
           long long rem = sum-k;
           if(mp.find(rem)!=mp.end()){
                int len = i - mp[rem];
               ans+=mp[rem];
                maxLen = max(maxLen,len);
               
           }
               mp[sum]++;
       }
       return ans;
    }
};