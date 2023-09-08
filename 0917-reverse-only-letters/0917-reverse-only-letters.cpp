class Solution {
public:
    bool check(char a){
        if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseOnlyLetters(string s) {
        int l = 0;
        int r = s.size()-1;
        string ans;
        while(l<=r){
            if(check(s[l])&&check(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!check(s[l])&&!check(s[r])){
                l++;
                r--;
            }
            else if(!check(s[l])){
                l++;
            }
            else{
                r--;
            }
        }
        return s;
    }
};