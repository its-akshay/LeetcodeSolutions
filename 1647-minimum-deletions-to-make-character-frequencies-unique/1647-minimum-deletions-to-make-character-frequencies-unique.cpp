class Solution {
public:
   int minDeletions(string s) {
        map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        
        set<int> freqSet;
        int deletions = 0;
        for (const auto& it : freqMap) {
            int frequency = it.second;
            while (freqSet.find(frequency) != freqSet.end()) {
                frequency--;
                deletions++;
            }
            if (frequency > 0) {
                freqSet.insert(frequency);
            }
        }
        
        return deletions;
    }
};