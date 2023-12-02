class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            unordered_map<char, int> temp_mp;
             for (int i = 0; i < chars.size(); i++) {
            temp_mp[chars[i]]++;
        }
            int x = 0;
            for (int j = 0; j < word.size(); j++) {
                if (temp_mp.find(word[j]) == temp_mp.end() || temp_mp[word[j]] == 0) {
                    break;
                }
                temp_mp[word[j]]--;
                x++;
                if (x == word.size()) {
                    ans += x;
                }
            }
        }
        return ans;
    }
};