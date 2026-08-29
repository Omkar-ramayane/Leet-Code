int cmp(void const*a,void const*b)
{
    return(*(int*)a-*(int*)b);
}
int findMin(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[0];
    
}