1public class Solution {
2    public int StrStr(string haystack, string needle) {
3        if(needle.Length == 0){
4            return 0;
5        }
6
7        int n = needle.Length;
8        int h = haystack.Length;
9
10        for(int i=0; i <= h-n; i++){
11            int j =0;
12
13            while(j<n && haystack[i+j]==needle[j]){
14                j++;
15            }
16
17            if(j == n){
18                return i;
19            }
20        }
21        return -1;
22    }
23}