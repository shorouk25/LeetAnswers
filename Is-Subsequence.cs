public class Solution {
    public bool IsSubsequence(string s, string t) {
        int lenT = t.Length;
        int lenS = s.Length;
        if(lenS == 0) return true;
        if(lenT == 0) return false;
        
        int j = 0;
        for(int i=0; i<lenT; i++){
            if(j<lenS && s[j] == t[i]){
                j++;
            }
        }

        if(j == lenS)
            return true;
        else
            return false;
    }
}