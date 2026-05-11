class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxProd = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int prod = (j-i) * min(height[i], height[j]);
                maxProd = max(maxProd, prod);
            }
        }
        return maxProd;
    }
};
