public class Solution {
    public bool IsPalindrome(string s) {
        if(s.Length == 0)
            return true;

        var sb = new StringBuilder();
        for(int i=0; i<s.Length; i++){
            if(char.IsLetterOrDigit(s[i])){
                sb.Append(char.ToLower(s[i]));
            }
        }
        string original = sb.ToString();

        var sb1 = new StringBuilder();
        for(int i=(original.Length)-1; i>=0; i--){
            sb1.Append(original[i]);
        }
        string reversed = sb1.ToString();

        if(original == reversed){
            return true;
        }
        else{
            return false;
        }
    }
}