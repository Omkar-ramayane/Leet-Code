int searchInsert(int* nums, int numsSize, int target) {
    if(target<=nums[0])
    {
        return 0;
    }
   
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==target)
            {
                return j;
            }
          if(j<numsSize-1)
            {
               if(nums[j]<target&&nums[j+1]>target)
            {
                return j+1;
            }
            }
        }
            
            return numsSize;
        
    
    
}