class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int t_sum = 0;
        for(int i=0;i<n;i++){
            t_sum+=nums[i];
        }

        int l_sum = 0;

        for(int i=0;i<n;i++){
            int r_sum = t_sum-l_sum-nums[i];
            if(l_sum==r_sum){
                return i;
            }

             l_sum+=nums[i];
        }

       return -1;
        
    }

};