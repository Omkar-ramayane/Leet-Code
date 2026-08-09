int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int findDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
   /* for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                return nums[i];
            }
        }
    }
    return -1;*/
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1])
        {
            return nums[i];
        }
    }
    return -1;
}