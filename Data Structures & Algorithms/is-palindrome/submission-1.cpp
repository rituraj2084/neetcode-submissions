class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char ch:s){
            if(('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z') || ('0' <= ch && ch <= '9')){
                newStr += ch;
            }
        }
        transform(newStr.begin(), newStr.end(), newStr.begin(), ::tolower);
        string reversedString = newStr;
        reverse(reversedString.begin(), reversedString.end());
        if(newStr == reversedString) return true;
        return false;
    }
};
