int cmp(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}
int findKthLargest(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int a=nums[k-1];
    return a;
    
}