class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> map;
        int max = INT_MIN;
        int found;
        
        for(int num : nums){
            map[num]++;
        }    

        for(const auto& it : map){
            if(it.second > max){
                max = it.second;
                found = it.first;
            }
        }
        return found;
    }
};