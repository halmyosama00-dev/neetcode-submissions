class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        for(int x = 0 ; x < (int)nums.size() - 1 ; x++){
            if (nums[x] == nums[x+1]) return true;
        }

        return false;
    }
};