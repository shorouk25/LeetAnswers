class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            if(map.find(x) != map.end()){
                return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};