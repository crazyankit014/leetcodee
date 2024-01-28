class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
	if (nums.empty()) {
		return result;
	}
	int n= nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; ++i) {
		if (nums[i] > 0) break;
		if (i > 0 and nums[i] == nums[i-1]) continue;
		int j = i+1, k = n-1;
		while (j < k) {
			int sum = nums[i] + nums[j] + nums[k];
			if (sum < 0) {
			 j++;
			} else if (sum > 0) {
				k--;
			} else {
				result.push_back({nums[i], nums[j], nums[k]});
				int last_j = nums[j], last_k = nums[k];
				// we have seen this number & combo before; skip
				while (j < k && nums[j] == last_j) j++;
				while (j < k && nums[k] == last_k) k--;
			}
		}

	}
	return result;
    }
};