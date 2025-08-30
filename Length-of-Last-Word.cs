public class Solution {
    public int LengthOfLastWord(string s) {
        int len = s.Length;
        if(len==0) return 0;
        int count=0;
        for(int i=len-1; i>=0; i--){
            if(s[i] == ' ' && count != 0){
                return count;
            }
            else if(s[i] != ' '){
                count++;
            }
        }
        return count;
    }
}