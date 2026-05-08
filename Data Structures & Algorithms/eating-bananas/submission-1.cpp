class Solution {
public:
    int calculateTotalHour(vector<int>& piles, int hourly){
        int totalHour = 0;
        for(int pile:piles){
            totalHour += ceil((double) pile / (double) hourly);
        }
        return totalHour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxElement = *max_element(piles.begin(), piles.end());
        // cout << "maxElement " << maxElement;
        int low = 1, high = maxElement;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;
            int totalHour = calculateTotalHour(piles, mid);
            if(totalHour <= h){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
