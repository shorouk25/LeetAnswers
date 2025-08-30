public class Solution {
    public int AppendCharacters(string s, string t) {
        if(s=="") return s.Length;
        if(t=="") return t.Length;

        int j = 0;
        for(int i=0; i<s.Length; i++){
            if(j<t.Length && t[j] == s[i]){
                j++;
            }
        }
        return (t.Length - j);
    }
}