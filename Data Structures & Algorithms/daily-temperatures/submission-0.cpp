class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        int n = temperatures.size();
        for(int i = 0; i < n; i++){
            bool flag = false;
            for(int j = i+1; j < n; j++){
                if(temperatures[j] > temperatures[i]){
                    res.push_back(j-i);
                    flag = true;
                    break;
                }
            }
            if(!flag){
                res.push_back(0);
            }
            
        }
        return res;
    }
};
