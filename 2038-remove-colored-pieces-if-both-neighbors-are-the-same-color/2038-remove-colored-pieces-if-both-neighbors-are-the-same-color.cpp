class Solution {
public:
    bool winnerOfGame(string colors) {
        string s = colors;
        int n = s.size();
        int alice = 0;
        int bob = 0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]==s[i]&&s[i+1]==s[i]){
                if(s[i]=='A'){
                    alice++;
                }
                else{
                    bob++;
                }
            }
        }
        if(alice-bob>=1){
        return true;
        }
        return false;
    }
};