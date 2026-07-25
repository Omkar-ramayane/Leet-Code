int missingNumber(int* nums, int numsSize) {
int sum=(numsSize*(numsSize+1)/2);
int e=0;
for(int i=0;i<numsSize;i++)
{
    e=e+nums[i];
}
return sum-e;
}