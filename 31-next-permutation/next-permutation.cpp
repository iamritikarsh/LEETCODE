class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // finding pivot index
        int idx = -1;
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }

        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // sorting after pivot/reverse
        reverse(nums.begin()+idx+1, nums.end());
        // finding just greater element than idx
        int j = -1;
        for(int i = idx+1 ; i<=n-1 ; i++ ){
            if(nums[i]>nums[idx]){
                j = i;
                break;
            }
        }
        // swapping idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
    }
};