int thirdMax(int* nums, int numsSize) {
    
    
    int max=INT_MIN;
    int s=INT_MIN;
    int t=INT_MIN;
    int c=0;
    for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
        {
            
            max=nums[i];
            
        }
    }

    for(int i=0;i<numsSize;i++)
    {
        if(s<nums[i]&&nums[i]!=max)
        {
        
            s=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(numsSize==3)
        {
        if(nums[i]!=s&&nums[i]!=max)
        {
            
            t=nums[i];
            c++;
        }
        }
    
        
             if(t<nums[i]&&nums[i]!=s&&nums[i]!=max)
        {
            
            t=nums[i];
            c++;
        }
        if(nums[i]==INT_MIN)
        {
            t=nums[i];
            c++;
        }

        
    }
    
    if(numsSize<3||c==0||s==INT_MIN)
    {
        return max;
    }
    
    return t;
       
}