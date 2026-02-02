1public class Solution {
2    public char FindTheDifference(string s, string t) {
3        Dictionary<char, int> freqS = new Dictionary<char, int>();
4        Dictionary<char, int> freqT = new Dictionary<char, int>();
5
6        foreach(var alpha in s){
7            if(freqS.ContainsKey(alpha)){
8                freqS[alpha] ++;
9            }
10            else{
11                freqS[alpha] = 1;
12            }
13        }
14
15        foreach(var alpha in t){
16            if(freqT.ContainsKey(alpha)){
17                freqT[alpha] ++;
18            }
19            else{
20                freqT[alpha] = 1;
21            }
22        }
23
24        foreach(var pair in freqT){
25            if(!freqS.ContainsKey(pair.Key) || pair.Value > freqS[pair.Key] ){
26                return pair.Key ;
27            }
28        }
29
30        return ' ';
31    }
32}