class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        int longStreak = 0;
       for(auto it:st){
           if(st.find(it-1)==st.end()){
               int cnt = 1;
               int x = it;
               while(st.find(x+1)!=st.end()){
                   x = x+1;
                   cnt = cnt+1;
               }
               longStreak = max(longStreak,cnt);
           }
       }
        return longStreak;
    }
};