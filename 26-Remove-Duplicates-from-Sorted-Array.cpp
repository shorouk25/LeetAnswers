class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int j=0;
      for(int i=1; i<nums.size(); i++){
        if(nums[i-1] != nums[i]){
            nums[j] = nums[i-1];
            j++;
        }
      }


      nums[j] = nums[nums.size()-1];
      j++;

      return j;
    }
};