/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int s=0;
    int c=0;
    for(int i=nums[0];i<=nums[numsSize-1];i++)
    {
    
        if(s<numsSize&&nums[s]==i)
        {
            s++;
        }
        
        else
        {
        
        
           c++; 
        }
          // s++;
        
        
    }
    int *ans=malloc(c*sizeof(int));

    int z=0;
    int f=0;
    for(int i=nums[0];i<=nums[numsSize-1];i++)
    {
        
        if(z<numsSize&&nums[z]==i)
        {
            
            z++;
           // f++;
        }
        else
        {
            ans[f]=i;
        
        f++;
        }
    }
    *returnSize=c;
    return ans;
}