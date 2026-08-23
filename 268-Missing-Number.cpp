class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = ((n)*(n+1))/2;
        int count = 0;
        for(int num : nums){
            count += num;
        }   
        int diff = total-count;
        return diff;
    }
};