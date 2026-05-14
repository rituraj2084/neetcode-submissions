class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       sort(s1.begin(), s1.end());
       int n = s2.length();
       for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string subStr = s2.substr(i, j-i+1);
            sort(subStr.begin(), subStr.end());
            if(s1 == subStr) return true;
        }
       }
       return false; 
    }
};
