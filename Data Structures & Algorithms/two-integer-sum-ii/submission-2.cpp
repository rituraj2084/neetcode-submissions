class Solution {
public:
    int search(vector<int>& nums, int target){
        int l = 0, r = nums.size()-1;
        cout << "target->" << target <<endl;
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
            int ind = search(numbers, num);
            if(ind != -1){
                return {i+1, ind+1};
            }
        }
        return {};
    }
};
