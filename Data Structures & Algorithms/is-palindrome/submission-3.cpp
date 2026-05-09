class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(char ch:s){
            if(isalnum(ch)){
                newStr += tolower(ch);
            }
        }
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
