class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int size = s.size();
        int j=size-1;
        int i=0;
        while(i<j){
            if(s[i] != s[j]){
                return isPalindrome(s, i, j-1) || isPalindrome(s, i+1, j);
            }
            i++; j--;
        }
        return true;
    }
};