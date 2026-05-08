class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>res;
        for(int num: nums){
            mp[num]++;
        }
        vector<pair<int, int>>temp;
        for(auto it:mp){
            temp.push_back({it.second, it.first});
        }
        sort(temp.begin(), temp.end());
        while(k--){
            auto it = temp.back();
            temp.pop_back();
            res.push_back(it.second);
        }
        return res;
    }
};