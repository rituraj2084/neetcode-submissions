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
        int i = 0, j = newStr.length() - 1;
        while(i < j){
            if(newStr[i] != newStr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
