int findPeakElement(int* nums, int numsSize) {
    int s;
    int max=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
            s=i;
        }
    }
    return s;
}