int removeDuplicates(int* nums, int numsSize) {

   

    for(int i=0;i<numsSize;i++)
    {
        int c=0;
        for(int j=i;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                c++;
            }
            if(c>2)
            {
            
                for(int k=j;k<numsSize-1;k++)
                {
                    nums[k]=nums[k+1];
                    
                }
                j--;
                numsSize--;
                c--;
               // nums[numsSize-1]=_;
            }
            

        }
    }

    return numsSize;
    
}