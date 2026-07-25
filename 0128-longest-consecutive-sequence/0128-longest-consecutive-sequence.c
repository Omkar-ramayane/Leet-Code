int cms(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int longestConsecutive(int* nums, int numsSize) {
    if(numsSize==0)
    {
        return 0;
    }
    qsort(nums,numsSize,sizeof(int),cms);

    

    int f=nums[0];
    int c=0;
    int b=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i>0&&nums[i]==nums[i-1])
        {
            continue;
        }
        if(nums[i]==f)
        {
           
            c++;
            f++;
        }
        else
        {
            f=nums[i];
            c=1;
            f++;
        }
        if(b<c)
           {
            b=c;
           }
    }
    return b;
    
}