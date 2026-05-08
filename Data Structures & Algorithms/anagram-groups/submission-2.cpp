class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<string>>mp;
        for(auto str:strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            mp[sortedStr].push_back(str);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
