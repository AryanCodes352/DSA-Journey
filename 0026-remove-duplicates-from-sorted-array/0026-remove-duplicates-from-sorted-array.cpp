class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique = 1;
        int o = 0;
        int c = 1;

        for(int i=1;i<n;i++){
            if(nums[c]==nums[o]){
                c++;
            }
            else if(nums[c]!=nums[o]){
                nums[o+1]=nums[c];
                c++;
                o++;
                unique++;
            }
        }

        return unique;

    }
};