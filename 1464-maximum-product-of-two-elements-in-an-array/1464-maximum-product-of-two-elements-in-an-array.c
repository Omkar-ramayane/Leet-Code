int maxProduct(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            int inter=0;
            inter=(nums[i]-1)*(nums[j]-1);
            if(inter>sum)
            {
                sum=inter;
            }

        }
    }
    return sum;
    
}