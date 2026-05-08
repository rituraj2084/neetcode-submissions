class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int zeroCount = 0;
        int prod = 1;
        int n = nums.size();
        for(int num:nums) {
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
        for(int num: nums){
            if(zeroCount > 0){
                if(num == 0){
                    res.push_back(prod);
                }
                else{
                    res.push_back(0);
                }
            }
            else{
                res.push_back(prod/num);
            }
        }
        return res;
    }
};