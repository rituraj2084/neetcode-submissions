class Solution {
public:
    int search(vector<int>& nums, int target, int low){
        int l = low, r = nums.size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int num = target - numbers[i];
            int ind = search(numbers, num, i+1);
            if(ind != -1){
                return {i+1, ind+1};
            }
        }
        return {};
    }
};
