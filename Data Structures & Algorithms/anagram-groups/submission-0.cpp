class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string, vector<string>>mp;
        for(auto &word: strs){
            string dup = word;
            sort(dup.begin(), dup.end());
            mp[dup].push_back(word);
        }
        for(auto &it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
