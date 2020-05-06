class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        vector<int> result;
        for (auto i(0); i < nums.size(); ++i)
        {
            if (hm.find(target - nums[i]) != hm.end())
            {
                result.push_back(hm[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            hm[nums[i]] = i;
        }
        return result;
    }
};
