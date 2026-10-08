int sumOfUnique(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        int c=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            sum=sum+nums[i];
        }
    }
    return sum;
    
}