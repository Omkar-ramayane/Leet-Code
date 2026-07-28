int findMiddleIndex(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
    }
    int l=0;
    for(int i=0;i<numsSize;i++)
    {
        sum=sum-nums[i];
        if(l==sum)
        {
            return i;
        }
        l=l+nums[i];
    }
    return -1;
    
}