void generateSubsets(const vector<int>& nums, vector<vector<int>> &subsets)
{
    int n = nums.size();
    int subset_ct = (1 << n); // Total subsets = 2^n

    // Loop through all bitmasks from 0 to (2^n - 1)
    for (int mask = 0; mask < subset_ct; mask++) {
        vector<int> subset;

        // Check each bit of 'mask'
        for (int i = 0; i < n; i++) {
            // If the i-th bit in mask is set, include nums[i]
            if ((mask & (1 << i)) != 0) {
                subset.push_back(nums[i]);
            }
        }

        // Add the current subset to the result
        if(subset.size()>=2){
            subsets.push_back(subset);
        }
    }
}
