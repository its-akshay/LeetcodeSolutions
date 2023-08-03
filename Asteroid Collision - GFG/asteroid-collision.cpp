//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &v) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                st.push(v[i]);
            }
            else{
                while(st.empty()==false &&st.top()<abs(v[i])){
                    st.pop();
                }
                if(st.empty()==false && st.top()==abs(v[i])){
                    st.pop();
                }
                else if(st.empty()){
                    ans.push_back(v[i]);
                }
            }
        
    }
        int idx=ans.size();//we need it ahead
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin()+idx,ans.end());
        return ans;
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends