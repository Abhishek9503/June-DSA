class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int i = n-1;
        for(; i>0; i--) {
            if(nums[i] > nums[i-1]) {
                break;
            }
        }
        if(i != 0) {
            int index = i;
            for(int j = n-1; j>=i; j--) {
                if(nums[j] > nums[i-1]) {
                    index = j;
                    break;
                }
            }
            swap(nums[i-1], nums[index]);
        }
        reverse(nums.begin()+i, nums.end());
    }
};