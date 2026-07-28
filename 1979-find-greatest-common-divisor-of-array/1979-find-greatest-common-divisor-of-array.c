int findGCD(int* nums, int numsSize) {
    int s=nums[0];
    int l=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(s>nums[i])
        {
            s=nums[i];
        }
        if(l<nums[i])
        {
            l=nums[i];
        }
    }
    int c=1;
    for(int i=1;i<=l;i++)
    {
        int k=0;
        if(s%i==0&&l%i==0)
        {
            k=i;
        }
        if(c<k)
        {
            c=k;
        }
    }
    return c;
}