class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
       for(auto c: s){
        if(isalnum(c)){
            newStr += tolower(c);
        }
       }
       cout<<newStr<<endl;
       int i = 0, j = newStr.length()-1;
       while(i < j){
        if(newStr[i] != newStr[j]) return false;
        i++;
        j--;
       }
       return true;
    }
};
