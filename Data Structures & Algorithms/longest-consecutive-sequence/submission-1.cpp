class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        vector<int> newArr;
        if(n <= 1) return n;
        // sort(nums.begin(), nums.end());
        set<int>st;
        for(int num: nums) st.insert(num);
        for(int num: st) newArr.push_back(num);
        for(int num: newArr) cout<< num << " ";
        int count = 1, maxCount = 1;
        for(int i = 1; i < newArr.size(); i++){
            if(newArr[i] - 1 == newArr[i-1]){
                count += 1;
                maxCount = max(maxCount, count);
            }
            else{
                count = 1;
            }
        }
        return maxCount;
    }
};
