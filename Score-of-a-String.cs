public class Solution {
    public int ScoreOfString(string s) {
        int len = s.Length;
        int score = 0;
        for(int i=0; i<len-1; i++){
            char c = s[i];
            char d = s[i+1];
            int asciiValue = (int)c - (int)d;

            if(asciiValue < 0){
                score += -asciiValue;
            } 
            else{
                score += asciiValue;
            }
        }
        return score;
    }
}