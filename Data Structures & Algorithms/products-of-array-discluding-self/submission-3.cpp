class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0, prod = 1;
        for(int num:nums){
            if(num == 0){
                zeroCount++;
            }
            else{
                prod *= num;
            }
        }
        if(zeroCount > 1){
            return vector<int>(n, 0);
        }
        vector<int>res;
        for(int num: nums){
            if(zeroCount > 0){
                num == 0 ? res.push_back(prod) : res.push_back(0);
            }
            else{
                res.push_back(prod/num);
            }
        }
        return res;
    }
};
