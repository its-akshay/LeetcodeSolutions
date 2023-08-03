class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();

        stack<char> st;

        for(int i = 0; i < n; i++){
            int ch = num[i] - '0';
            while(k > 0 && !st.empty() && (st.top() - '0') > ch){
                k--;
                st.pop();
            }

            st.push(num[i]);
        }

        // k is non-zero; inc order of digits, remove remaining from the back
        while(k--) st.pop();

        string ans = "";
        while(!st.empty()){
             ans += st.top();
             st.pop();
        }

        reverse(ans.begin(), ans.end());

        // edge case - remove leading zeroes
        int i = 0;
        for(; i < ans.length(); i++){
            if(ans[i] != '0') break;
        }

        if(ans.substr(i) == "") return "0";
        else return ans.substr(i);
    }
};