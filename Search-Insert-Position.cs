public class Solution {
    public int SearchInsert(int[] nums, int target) {
        return BinarySearch(nums,target, 0, (nums.Length) -1);
    }

    public int BinarySearch(int[] nums,int target, int left, int right){
        if(left > right){
            return left;
        }
           
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            return BinarySearch(nums,target, mid+1, right);
        }
        else if(target < nums[mid]){
            return BinarySearch(nums,target, left, mid-1);
        }

        return -1;
    }
}