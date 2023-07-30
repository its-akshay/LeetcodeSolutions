//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.length()!=str2.length()){
            return false;
        }
        // Your code here
        map<char,char>mp;
        map<char,char>mpp;
        for(int i=0;i<str1.size();i++){
            char s = str1[i];
            char t = str2[i];
            if(mp.count(s)&&mp[s]!=t){
                return false;
            }
            if(mpp.count(t)&&mpp[t]!=s){
                return false;
            }else{
                mp[s] = t;
                mpp[t] = s;
            }
        }
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends