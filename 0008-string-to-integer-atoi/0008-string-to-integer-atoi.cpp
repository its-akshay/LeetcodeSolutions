class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        int start = 0;
       while(start<s.length()&&s[start]==' '){
           start++;
       }
        bool c = true;
        bool plus = true;
        if(s[start]=='-'){
            c = false;
            start++;
        }
        if(s[start]=='+'){
            plus = false;
            start++;
        }
        
        
        for(int i=start;i<s.length();i++){
            if (!isdigit(s[i])) {
                break;
            }
             if (res > (INT_MAX - (s[i]-'0')) / 10) {
                return c ? INT_MAX : INT_MIN;
            }
           res = res*10+(s[i]-'0');
        }
        if(c==false&&plus==false){
            return 0;
        }
        if(c==false){
            return (-1)*res;
        }
        return res;

    }
};