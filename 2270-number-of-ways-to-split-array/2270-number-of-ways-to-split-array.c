int waysToSplitArray(int* nums, int numsSize) {
    long long s=0;
    for(int i=0;i<numsSize;i++)
    {
        s=s+nums[i];
    }
    long long l=0;
    int c=0;
    for(int i=0;i<numsSize-1;i++)
    {
        l=l+nums[i];
        long long r=s-l;
        if(l>=r)
        {
            c++;
        }
       
    }
    return c;
}