class Solution {
public:

    void subsequence(vector<int>& arr, int index, int n,
                     vector<vector<int>>& ans, vector<int> temp) {

        if (index == n) {
            ans.push_back(temp);
            return;
        }

        // Don't include the current element
        subsequence(arr, index + 1, n, ans, temp);

        // Include the current element
        temp.push_back(arr[index]);
        subsequence(arr, index + 1, n, ans, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        subsequence(nums, 0, nums.size(), ans, temp);

        return ans;
    }
};