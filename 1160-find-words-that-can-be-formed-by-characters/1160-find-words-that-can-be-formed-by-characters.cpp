class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        for (char ch : chars) {
            mp[ch]++;
        }

        int ans = 0;
        for (const string& word : words) {
            unordered_map<char, int> temp_mp(mp);  // Make a copy of the original map for each word
            bool valid = true;
            for (char ch : word) {
                if (temp_mp.find(ch) == temp_mp.end() || temp_mp[ch] == 0) {
                    valid = false;
                    break;
                }
                temp_mp[ch]--;
            }
            if (valid) {
                ans += word.size();
            }
        }

        return ans;
    }
};