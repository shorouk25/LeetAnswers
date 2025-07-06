class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mapFreq;

        for(int i : nums){
            mapFreq[i]++;
        }

        int j = 0;
        for(auto& pair: mapFreq){
            while(pair.second != 0){
                pair.second--;
                nums[j] = pair.first;
                j++;
            }
        }
    }
};