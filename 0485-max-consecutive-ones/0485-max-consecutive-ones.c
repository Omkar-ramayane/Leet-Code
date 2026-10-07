int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int c=0;
    int f=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            c=0;
        }
        if(nums[i]==1)
        {
            c++;
        }
        if(f<c)
        {
            f=c;
        }
    }
    return f;
    
}