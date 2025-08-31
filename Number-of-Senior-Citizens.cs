public class Solution {
    public int CountSeniors(string[] details) {
        int count = 0;
        for(int i=0; i<details.Length; i++){
            string sub = details[i].Substring(11,2);
            int num = int.Parse(sub);
            if(num > 60){
                count++;
            }
        }
        return count;
    }
}