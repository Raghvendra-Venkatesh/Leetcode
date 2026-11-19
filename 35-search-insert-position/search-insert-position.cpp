class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=nums.size()-1;i>=0;i--){
            if(target<=nums[i]){
                continue;
            }
            else{
                return i+1;
            }
        }
        return 0;
    }
};