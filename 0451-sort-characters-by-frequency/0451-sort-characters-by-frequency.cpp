class Solution {
public:
    static bool cmp(pair<char,int>a,pair<char,int>b){
        return (a.second>b.second);
    }
    string frequencySort(string s) {
        int n = s.length(); 
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>res;
        for(auto it:mp){
            res.push_back(it);
        }
        // t - 1
        // r - 1
        // e - 2
        sort(res.begin(),res.end(),cmp);
        string out = "";
        for(auto it:res){
            int temp = it.second;
            while(temp!=0){
                out+=it.first;
                temp = temp-1;
            }
        }
        return out;
    }
};