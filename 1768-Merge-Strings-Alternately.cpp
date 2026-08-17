class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1= word1.size();
        int size2= word2.size();
        string merged;
        int i=0; 
        int j=0;

        while(i<size1 && j<size2){
            merged += word1[i];
            merged += word2[j];
            ++i; ++j;
        }

        while(i<size1){
            merged += word1[i];
            ++i;
        }

        while(j<size2){
            merged += word2[j];
            ++j;
        }

        return merged;
    }
};