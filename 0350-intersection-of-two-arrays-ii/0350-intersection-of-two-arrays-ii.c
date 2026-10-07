/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans=malloc(nums1Size*sizeof(int));
     int g=0;
    int c=0;
    if(nums2Size>nums1Size)
    {
        for(int i=0;i<nums1Size;i++)
        {
            for(int j=0;j<nums2Size;j++)
            {
                if(nums1[i]==nums2[j])
                {
                   ans[g]=nums1[i];
                   nums2[j]=INT_MIN;
                   g++;
                   c++;
                   break;
                }
            }
        }
    }

    else
    {
         for(int i=0;i<nums2Size;i++)
        {
            for(int j=0;j<nums1Size;j++)
            {
                if(nums2[i]==nums1[j])
                {
                   ans[g]=nums2[i];
                   nums1[j]=INT_MIN;
                   g++;
                   c++;
                   break;
                }
            }
        }
    }
    
    *returnSize=c;
    return ans;
    
}