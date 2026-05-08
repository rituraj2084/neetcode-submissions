class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int>merged;
        double ans;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(nums1[i] <= nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j < m){
            merged.push_back(nums2[j]);
            j++;
        }
        int len = merged.size();
        if(len%2 != 0){
            ans = (double)merged[(len/2)];
        }
        else{
            ans = ((double)merged[len/2] + (double)merged[(len/2)-1])/2;
        }
        return ans;
    }
};
