void sortColors(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        int s=i;
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[s]>nums[j])
            {
                s=j;
            }
        }
        int temp=nums[i];
        nums[i]=nums[s];
        nums[s]=temp;
    }
     return;
}