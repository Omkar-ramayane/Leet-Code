int pivotIndex(int* nums, int numsSize) {
    int l=0;
    int t=0;
    for(int i=0;i<numsSize;i++)
    {
        t=t+nums[i];
    }
     for(int i=0;i<numsSize;i++)
     {
        t=t-nums[i];
        if(l==t)
        {
            return i;
        }
        l=l+nums[i];
     }
     return -1;
}