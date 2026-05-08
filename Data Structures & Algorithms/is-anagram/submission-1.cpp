class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length(), m = t.length();
        if(n != m) return false;
        unordered_map<char, int>mp;
        for(auto it: s){
            mp[it]++;
        }
        for(auto it: t){
            mp[it]--;
        }
        for(auto it: mp){
            if(it.second > 0) return false;
        }
        return true;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i = 0; i < n; i++){
        //     if(s[i] != t[i]) return false;
        // }
        // return true;
    }
};
