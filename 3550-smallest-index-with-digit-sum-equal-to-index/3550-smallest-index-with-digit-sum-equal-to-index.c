int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {     int s=0;
        while(nums[i]!=0)
        {
            int a=nums[i]%10;
            s=s+a;
            nums[i]=nums[i]/10;
        }
        if(s==i)
        {
            return i;
        }
    }
    return -1;
}