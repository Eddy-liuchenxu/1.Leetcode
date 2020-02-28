/*************************************************************************
	> File Name: LeetCode268.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时02分49秒
 ************************************************************************/
int missingNumber(int* nums, int numsSize){
    int *num = (int *)calloc(numsSize + 1,sizeof(int));
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        num[nums[i]] = 1;
        if(ans < nums[i]) ans = nums[i];
    }
    for(int i = 0; i <=numsSize; i++) {
        if(num[i] != 1) {
           return i;
        }
       
    }
    return 0;
}
