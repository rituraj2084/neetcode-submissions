class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        map<int, int>mp;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int num: nums) mp[num]++;
        for(int i = 0; i < n; i++){
            mp[nums[i]]--;
            for(int j = i+1; j < n; j++){
                mp[nums[j]]--;
                int target = 0 - (nums[i] + nums[j]);
                if(target >= nums[j] && mp.count(target) && mp[target] > 0){
                    res.insert({nums[i], nums[j], target});
                }
                mp[nums[j]]++;
            }
            mp[nums[i]]++;
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
