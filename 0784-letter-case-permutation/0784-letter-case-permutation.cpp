class Solution {
public:

    unordered_set<string> res;

    void fun(int i,string s){
        if(i == s.size()){
            res.insert(s);
            return;
        }

        fun(i+1,s);

        if('a' <= s[i] <= 'z' || 'A' <= s[i] <= 'Z'){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
            fun(i+1,s);
        }
    }

    vector<string> letterCasePermutation(string s) {
        fun(0,s);
        vector<string> ans;
        for(auto it:res) ans.push_back(it);
        return ans;
    }
};
