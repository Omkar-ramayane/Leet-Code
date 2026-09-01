int minimumDistance(int* nums, int numsSize) {
    int r=INT_MAX;
    int f=0;
    for(int i=0;i<numsSize;i++)
    {   int s=0;
        for(int j=i+1;j<numsSize;j++)
        {
            for(int k=j+1;k<numsSize;k++)
            {  // int s=0;
                if(nums[i]==nums[j]&&nums[j]==nums[k])
                {
                    f=1;
                  s=(j-i)+(k-j)+(k-i);
                //  return r;
                
                if(s<r)
                {
                    r=s;
                }
                }
            }
        }
    }
    if(f)
    return r;
    return -1;
    
}