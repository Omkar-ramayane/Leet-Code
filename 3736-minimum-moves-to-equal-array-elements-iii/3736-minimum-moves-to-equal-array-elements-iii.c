int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int minMoves(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int m=nums[numsSize-1];
    int c=0;
    for(int i=0;i<numsSize-1;i++)
    {
        int a=nums[i];
        while(a!=m)
        {
            if(a==m)
            {
                break;
            }
            a++;
            c++;
        }
    }
    return c;
}