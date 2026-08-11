int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int missingInteger(int* nums, int numsSize) {
   // qsort(nums,numsSize,sizeof(int),cmp);

    int f=nums[0];
    int c=0;
    int d=0;
    int sum=0;
    int n=0;
    for(int i=0;i<numsSize;i++)
    {
        
        if(f==nums[i])
        {
            sum=sum+nums[i];
            f++;
            c++;
        }
        else
        {
            if(c>0)
            {
               // d=c;
               // n=sum;
                break;

                
            }
            f=nums[i];
            f++;
        }
    }
    n=sum;
     qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++)
    {
        if(n==nums[i])
        {
            n++;
        }
    }
    return n;
}