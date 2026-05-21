class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> notebook;
    for (int i = 0; i < nums.size(); i++) {
        int current_num = nums[i];
        int required_num = target - current_num; 
        if (notebook.count(required_num)) return { notebook[required_num], i };
        notebook[current_num] = i;
    }
    return {};
    }
};
