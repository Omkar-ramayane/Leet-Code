/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(2*sizeof(int));
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==nums[i+1])
        {
            ans[0]=nums[i];
            break;
        }
    }
  int s=0;
  for(int i=0;i<numsSize;i++)
  {
    s=s+nums[i];
  }
  s=s-ans[0];
  int b=numsSize*(numsSize+1)/2;
  int c=b-s;
  ans[1]=c;
  *returnSize=2;
  return ans;
    
}