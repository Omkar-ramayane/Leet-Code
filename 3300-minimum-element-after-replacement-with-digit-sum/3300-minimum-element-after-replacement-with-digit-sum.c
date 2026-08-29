int minElement(int* nums, int numsSize) {
    int ans[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        int b=nums[i];
        int sum=0;
        while(b!=0)
        {
            int a=b%10;
            sum=sum+a;
            b=b/10;
        }
        ans[i]=sum;
    }
    int s=ans[0];
    for(int i=1;i<numsSize;i++)
    {
        if(s>ans[i])
        {
            s=ans[i];
        }
    }
    return s;
}