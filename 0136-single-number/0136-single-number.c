int singleNumber(int* nums, int numsSize) {
    int ans=0;
    int f=1;
    for(int i=0;i<numsSize;i++)
    { f=1;
        for(int j=0;j<numsSize;j++)
        {
            if(i!=j){
            if(nums[i]==nums[j])
            {
                f=0;
               break;
            }
            }
        }
        if(f)
        {
       return nums[i];
        }
    }
        return -1;
    
    
}