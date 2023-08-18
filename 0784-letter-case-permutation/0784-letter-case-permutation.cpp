class Solution {
public:


    void fun(int i,string s,vector<string>&v){
        if(i == s.size()){
            v.push_back(s);
            return;
        }

        fun(i+1,s,v);

        if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
            fun(i+1,s,v);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string>v;
        fun(0,s,v);
        return v;
    }
};
