/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int c=numsSize*2;
    int *ans=malloc(c*sizeof(int));
    int s=0;
    for(int i=0;i<c;i++)
    {
        if(i<numsSize)
        {
            ans[i]=nums[i];
            continue;
        }
        s=i;
        break;
    }
      for(int i=0;i<numsSize;i++)
      {
        ans[s]=nums[i];
        s++;
      }

      *returnSize=c;
      return ans;
    
}