/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) 
{
    int *ans=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {  int s=0;
        for(int j=0;j<=i;j++)
        {
            s=s+nums[j];
        }
        ans[i]=s;
    }

*returnSize=numsSize;
return ans;
    
}