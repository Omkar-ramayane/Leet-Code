int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int maximumProduct(int* nums, int numsSize) {
    if(numsSize==3)
    {
        int y=nums[0]*nums[1]*nums[2];
        return y;
    }
    qsort(nums,numsSize,sizeof(int),cmp);
    int a=1;
    int b=1;
    for(int i=0;i<3;i++)
    {
        a=a*nums[i];
    }
    int c=0;
    for(int i=numsSize-1;c<3;i--)
    {
        b=b*nums[i];
        c++;
    }
    int u=nums[numsSize-1]*nums[1]*nums[0];
    
    if(u>=a&&u>=b)
    {
        return u;
    }
    if(a>=u&&a>=b)
    {
        return a;
    }
    if(b>=a&&b>=u)
    {
        return b;
    }
          
      return 0; 
 
}