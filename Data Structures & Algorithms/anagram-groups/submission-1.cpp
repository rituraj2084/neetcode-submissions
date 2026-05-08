class Solution {
private:
    string strSort(string &word){
        int counter[26] = {0};
        for(auto ch:word){
            counter[ch-'a']++;
        }
        string t;
        for(int i = 0; i < 26; i++){
            t += string(counter[i], i+'a');
        }
        return t;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string, vector<string>>mp;
        for(auto &word: strs){
            string dup = word;
            // sort(dup.begin(), dup.end());
            mp[strSort(dup)].push_back(word);
        }
        for(auto &it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
