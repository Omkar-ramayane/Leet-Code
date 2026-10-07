/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans=(int*)malloc(nums2Size*sizeof(int));
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=i+1;j<nums1Size;j++)
        {
            if(nums1[i]==nums1[j])
            {
                for(int k=j;k<nums1Size-1;k++)
                {
                    nums1[k]=nums1[k+1];
                }
                nums1Size--;
                j--;
            }

        }
    }

    for(int i=0;i<nums2Size;i++)
    {
        for(int j=i+1;j<nums2Size;j++)
        {
            if(nums2[i]==nums2[j])
            {
                for(int k=j;k<nums2Size-1;k++)
                {
                    nums2[k]=nums2[k+1];
                }
                nums2Size--;
                j--;
            }

        }
    }

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
                   g++;
                   c++;
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
                   g++;
                   c++;
                }
            }
        }
    }
    *returnSize=c;
    return ans;
}