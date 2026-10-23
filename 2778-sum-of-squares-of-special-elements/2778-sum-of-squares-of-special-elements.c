int sumOfSquares(int* nums, int numsSize) {
    int r=0;
    for(int i=1;i<=numsSize;i++)
    {
        if(numsSize%i==0)
        {
            r=r+(nums[i-1]*nums[i-1]);
        }
    }
    return r;
    
}