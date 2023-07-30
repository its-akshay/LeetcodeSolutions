class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,char>mp;
        map<char,char>mpp;
        for(int i=0;i<s.length();i++){
            char ss = s[i];
            char tt = t[i];
            if(mp.count(ss)&&mp[ss]!=tt){
                return false;
            }
            if(mpp.count(tt)&&mpp[tt]!=ss){
                return false;
            }
            else{
                mp[ss] = tt;
                mpp[tt] = ss;
            }
        }
        return true;
    }
};