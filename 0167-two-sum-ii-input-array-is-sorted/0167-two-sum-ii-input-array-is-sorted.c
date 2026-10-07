/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *ans=malloc(2*sizeof(int));
    int s=0;
    int e=numbersSize-1;
    while(1)
    {
        int sum=numbers[s]+numbers[e];
        if(sum>target)
        {
            e--;
        }
        else if(sum<target)
        {
            s++;
        }
        else if(sum==target)
        {
            ans[0]=s+1;
            ans[1]=e+1;
            *returnSize=2;
            return ans;
        }
    }
   
    *returnSize=0;
    
    return ans;
}