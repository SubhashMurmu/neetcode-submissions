class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;

        for (const std::string& s : strs) {
            int count[26] = {0};
            for (char c : s) {
                count[c - 'a']++;
            }
            
            std::string key = "";
            for (int i = 0; i < 26; ++i) {
                key += std::to_string(count[i]) + '#';
            }
            
            groups[key].push_back(s);
        }
        
        std::vector<std::vector<std::string>> result;
        result.reserve(groups.size());
        for (auto& pair : groups) {
            result.push_back(std::move(pair.second));
        }

        return result;
    }
};
