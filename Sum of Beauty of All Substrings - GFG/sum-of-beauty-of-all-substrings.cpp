//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int beauty(int freq[]){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
        maxi = max(freq[i],maxi);
        mini = min(freq[i],mini);
            
        }
    }
    return (maxi-mini);    
  }
    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            int freq[26] = {0};
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;
                sum+=beauty(freq);
            }
        }
        return sum;
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
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends