int maxSubArray(int* nums, int numsSize) {
    int c=nums[0];
    int m=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(c+nums[i]>nums[i])
        c=c+nums[i];
        else
        c=nums[i];
        if(c>m)
        {
            m=c;
        }
    }
    return m;
}