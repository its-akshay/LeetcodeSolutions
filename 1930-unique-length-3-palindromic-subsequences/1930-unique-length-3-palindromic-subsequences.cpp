class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res = 0;
        
        unordered_set<char>st;
        
        for(char c:s){
            st.insert(c);
        }
        
        for(char c:st){
            int start = s.find(c);
            int end = s.rfind(c);
            if(start<end){
                unordered_set<char>cs;
                for(int i = start+1;i<end;i++){
                    cs.insert(s[i]);
                }
                res+=cs.size();
            }
        }
        return res;
    }
};