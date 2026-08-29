/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(numsSize*sizeof(int));
    int t=1;
    int c=0;
     int ind=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            c++;
            ind=i;
            continue;
        }
        else
        {
            t=t*nums[i];
        }
    }
    if(c>=2)
    {
        for(int i=0;i<numsSize;i++)
        {
            ans[i]=0;
        }
         *returnSize=numsSize;
        return ans;
    }
    if(c==1)
    {
        for(int i=0;i<numsSize;i++)
        {
             if(i!=ind)
             {
                ans[i]=0;
             }
             else
             {
                ans[i]=t;
             }
        }
         *returnSize=numsSize;
        return ans;
    }

    for(int i=0;i<numsSize;i++)
    {
        ans[i]=t/nums[i];
    }

    *returnSize=numsSize;
    return ans;
    
}