bool check(int *nums,int n,int index) {
    int count = 0;
    for(int j=0;j<n;j++) {
        if(nums[index]==nums[j]) {
            count++;
        }
        if(count>1){
            return false;
        }
    }
    return true;
}
int singleNumber(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++) {
        if(check(nums,numsSize,i)) {
            return nums[i];
        }
    }
    return 0;
}