class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
            || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U'){
                vowels += s[i];
            }
        }

        int i=0; int j=(vowels.size())-1;
        while(i<j){
            char temp = vowels[i];
            vowels[i] = vowels[j];
            vowels[j] = temp;
            i++;
            j--;
        }

        int it=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
            || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U'){
                s[i] = vowels[it];
                it++;
            }
        }

        return s;
    }
};