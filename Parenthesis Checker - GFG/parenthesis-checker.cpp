//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool compare(char a, char b){
        if((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']')){
            return true;
        }
        return false;
    }
    bool ispar(string s)
    {
        stack<char>st;
       for(int i=0;i<s.size();i++){
           if(s[i]=='('||s[i]=='{'||s[i]=='['){
               st.push(s[i]);
           }
           else{
               if(st.empty()==true){
                   return false;
               }
               else if(compare(st.top(),s[i])==false){
                   return false;
               }
               else{
                   st.pop();
               }
           }
       }
       return (st.empty()==true);
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends