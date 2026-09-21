/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
 #include <stdlib.h>
int* twoSum(int* nums, int ns, int t, int* returnSize) {
    int k=0;
    for(int i=0;i<ns;i++){
        for(int j=i+1;j<ns;j++){
            if(nums[i]+nums[j]==t){
                int *rs=(int*)malloc(2*sizeof(int));
                rs[0]=i;
                rs[1]=j;
                *returnSize=2;
                return rs;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
