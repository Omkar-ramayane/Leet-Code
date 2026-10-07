/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(2*sizeof(int));
    ans[0]=0;
    ans[1]=1;
    int sub=0;
    for(int i=0;i<numsSize;i++)
    {    int c=0;
        for(int j=0;j<numsSize;j++)
        {   
            if(nums[i]==nums[j])
            {
                c++;
                
            }
        }
            if(c==1)
            { sub++;
            if(sub==1)
            
            {
                ans[0]=nums[i];
                
            }
             if(sub==2)
            {
                ans[1]=nums[i];
            }
    }
        
        
    }
    *returnSize=2;
    return ans;
}