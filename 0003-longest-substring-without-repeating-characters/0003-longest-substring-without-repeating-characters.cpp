class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int tail = 0;
        int len = 0;
        for(int i=0;i<s.size();i++){
            if(st.count(s[i])==0)
            {
               st.insert(s[i]);
               len = max(len,i-tail+1);
            }
            else{
                while(st.count(s[i])){
                    st.erase(s[tail]);
                    tail++;
                }
            }
            st.insert(s[i]);
            
        }
        return len;
    }
};