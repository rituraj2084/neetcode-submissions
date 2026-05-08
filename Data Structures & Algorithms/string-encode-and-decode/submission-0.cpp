class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(string &s: strs){
            str += to_string(s.length()) + '#' + s;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> res;
    int i = 0;
    int n = s.length();
    while (i < n) {
        int j = i;
        while (s[j] != '#') {
            j++;
        }
        int len = stoi(s.substr(i, j - i));
        res.push_back(s.substr(j + 1, len));   
        i = j + 1 + len;                
    }
    return res;
    }
};
