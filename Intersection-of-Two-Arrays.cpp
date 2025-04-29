class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> map;
        vector<int> result;

        for(int num : nums1){
            map[num] = true;
        }

        for(int num : nums2){
            if(map[num]){
                result.push_back(num);
                map[num] = false;
            }
        }
        return result;
    }
};
