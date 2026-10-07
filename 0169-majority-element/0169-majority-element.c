int majorityElement(int* nums, int numsSize) {
    int ca=0;
    int c=0;
    for(int i=0;i<numsSize;i++)
    {
        if(c==0)
        {
        ca=nums[i];
        }
        if(ca==nums[i])
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    return ca;
    
}