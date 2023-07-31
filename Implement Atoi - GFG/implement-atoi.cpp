//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    /*You are required to complete this method */
    public:
    int atoi(string s) {
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
            if(!isdigit(s[i])){
                return -1;
            }
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
            return -1;
        }
        if(c==false){
            return (-1)*res;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends