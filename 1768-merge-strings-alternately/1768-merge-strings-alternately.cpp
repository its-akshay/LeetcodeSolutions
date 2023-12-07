class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n1 = word1.size();
        int n2 = word2.size();
        int i = 0;
        int j = 0;
        while(i<word1.size()&&j<word2.size()){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;j++;
        }
        while(i<word1.size()){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<word2.size()){
             ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};