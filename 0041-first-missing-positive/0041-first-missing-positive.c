int cmp(const void*a,const void*b)
{
   // return(*(int*)a-*(int*)b);
    int x=*(const int*)a;
    int y=*(const int*)b;
    if(x<y)
    return -1;
    if(x>y)
    return 1;
    return 0;
}
int firstMissingPositive(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int ex=1;
  
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<=0)
        {
            continue;
        }
        
        if(nums[i]==ex)
        {
            ex++;
        }
         if(nums[i]>ex)
        {
            return ex;
        }
        
    }
    return ex;
}