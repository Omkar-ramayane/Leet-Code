/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(numsSize*sizeof(int));

    int arr1[numsSize];
    int arr2[numsSize];

int t=0;
    for(int i=0;i<numsSize;i++)
    {
        t=t+nums[i];
    }
    arr1[0]=0;
    int l=0;
    for(int i=0;i<numsSize-1;i++)
    {
        l=l+nums[i];
        arr1[i+1]=l;

    }
      for(int i=0;i<numsSize;i++)
      {
          t=t-nums[i];
          arr2[i]=t;
      }

       for(int i=0;i<numsSize;i++)
       {
            int m=arr1[i]-arr2[i];
            if(m<0)
            {
                m=m*-1;
            }
            ans[i]=m;
       }
    *returnSize=numsSize;
    return ans;
}