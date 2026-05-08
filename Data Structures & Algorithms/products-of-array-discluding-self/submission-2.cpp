class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        int zeroCount = 0;
        for(int num: nums){
            if(num == 0) zeroCount++;
        }
        if(zeroCount >= 2){
            for(int i = 0; i < n; i++){
                res.push_back(0);
            }
            return res;
        }
        int prod = 1;
        if(zeroCount == 1){
            for(int i = 0; i < n; i++){
                if(nums[i] != 0){
                    prod *= nums[i];
                }
            }
            for(int num: nums){
                if(num == 0){
                    res.push_back(prod);
                }
                else{
                    res.push_back(0);
                }
            }
            return res;
        }
        for(int num: nums){
            prod *= num;
        }
        for(int num: nums){
            res.push_back(prod/num);
        }
        return res;
    }
};
