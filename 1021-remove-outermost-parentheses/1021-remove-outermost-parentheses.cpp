class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string result;
        stack<char>st;
        for(int i :s){
            if(i=='('){
                if(st.empty()==false){
                    result.push_back(i);
                }
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()==false){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};