class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int k = 0; k < (int)nums.size() - 2; k++) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            int i = k + 1, j = nums.size() - 1;
            while (i < j) {
                int sum = nums[k] + nums[i] + nums[j];
                if (sum == 0) {
                    result.push_back({nums[k], nums[i], nums[j]});
                    int a = nums[i], b = nums[j];
                    while (i < j && nums[i] == a) i++;
                    while (i < j && nums[j] == b) j--;
                } else if (sum < 0) {
                    i++;
                } else {
                    j--;
                }
            }
        }
        return result;
    }
};