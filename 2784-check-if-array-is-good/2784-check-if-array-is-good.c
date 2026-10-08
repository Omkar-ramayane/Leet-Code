bool isGood(int* nums, int numsSize) {
    int f=1;
    int max=nums[0];
    for(int i=1;i<numsSize;i++)
    {  if(max<nums[i])
       {
        max=nums[i];
       }
    }
    int c=0,co=0;
    for(int i=0;i<numsSize;i++)
    {
        if(max==nums[i])
        {
            c++;
        }
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]!=max)
            {
                if(nums[i]==nums[j])
                {
                    co++;
                }
            }
        }
    }
    if(c!=2||co>numsSize-2)
    return false;
        if(max+1!=numsSize)
          return false;
          return true;
}