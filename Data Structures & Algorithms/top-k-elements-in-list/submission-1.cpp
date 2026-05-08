class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int, int>mp;
        for(int num: nums){
            mp[num]++;
        }
        vector<pair<int, int>>pr;
        for(auto it:mp){
            pr.push_back({it.second, it.first});
        }
        sort(pr.begin(), pr.end());
        int n = pr.size();
        for(int i = 0; i < k; i++){
            ans.push_back(pr[n-1-i].second);
        }
        return ans;
    }
};
