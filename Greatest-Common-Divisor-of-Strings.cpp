#include <numeric>
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1){
           return "";
        }
        
        string word;
        int num1 = str1.size();
        int num2 = str2.size();

        int z = gcd(num1, num2);
        
        word = str1.substr(0,z);
        return word;
    }
};