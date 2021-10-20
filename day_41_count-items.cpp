class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key;
        int idx = key == "type" ? 0 : key == "color" ? 1 : 2;
    return count_if(begin(items), end(items), [&](const auto &i) { return i[idx] == val; });
    }
};
