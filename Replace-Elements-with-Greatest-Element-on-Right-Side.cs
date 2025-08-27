public class Solution {
    public int GetMaxNumber(int[] arr, int start){
        int len = arr.Length;
        int maxNumber = int.MinValue;

        for(int i=start; i<len; i++){
            if(arr[i]>maxNumber){
                maxNumber = arr[i];
            }
        }
        return maxNumber;
    }

    public int[] ReplaceElements(int[] arr) {
        int len = arr.Length;

        if(len == 1){
            arr[0] = -1;
            return arr;
        }

        for(int i=0; i<len; i++){
            arr[i] = GetMaxNumber(arr, i+1);
            if(i == (len-1)){
                arr[i] = -1;
            }
        }
        return arr;
    }
}