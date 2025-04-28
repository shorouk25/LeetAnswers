class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> copy;
        for(int i = 0; i<nums.size(); i++){
            int remainder = target - nums[i];
            if(copy.find(remainder) != copy.end()){
                return {copy[remainder], i};
            }
            copy[nums[i]] = i;
        }
        return {};
    }
};