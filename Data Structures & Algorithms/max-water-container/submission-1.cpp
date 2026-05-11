class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxProd = 0;
        int i = 0, j = n-1;
        while(i < j){
            int prod = (j-i) * min(height[i], height[j]);
            maxProd = max(prod, maxProd);
            if(height[i] <= height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxProd;
    }
};
