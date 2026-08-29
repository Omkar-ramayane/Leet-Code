void moveZeroes(int* nums, int numsSize) {
    if(numsSize==1)
    {
        if(nums[0]==0)
        {
            return; 
        }
    }
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
       
    }
    
}