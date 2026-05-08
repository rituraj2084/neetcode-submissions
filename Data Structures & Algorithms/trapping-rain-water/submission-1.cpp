class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;
        int res = 0;
        vector<int>leftMax(n);
        vector<int>rightMax(n);
        int maxLeft = 0, maxRight = 0;
        for(int i = 0; i < n; i++){
            maxLeft = max(maxLeft, height[i]);
            leftMax[i] = maxLeft;
        }
        for(int i = n-1; i >= 0; i--){
            maxRight = max(maxRight, height[i]);
            rightMax[i] = maxRight;
        }
        for(int i = 0; i < n; i++){
            res += min(leftMax[i], rightMax[i]) - height[i];
        }
        return res;
    }
};
