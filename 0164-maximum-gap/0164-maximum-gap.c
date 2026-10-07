int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int maximumGap(int* nums, int numsSize) {
    //int*ans=malloc(sizeof(int));
    qsort(nums,numsSize,sizeof(int),(cmp));
    int diff =0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i+1]-nums[i]>diff)
        {
            diff=nums[i+1]-nums[i];
        }

    }
    
    return diff;
}