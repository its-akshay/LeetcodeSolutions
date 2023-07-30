//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string ans;
        int n = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(cnt!=0){
                    ans+=s[i];
                }
                cnt++;
            }
            else{
                if(cnt!=1){
                    ans+=s[i];
                }
                cnt--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends