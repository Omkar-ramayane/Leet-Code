/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    if(digits[digitsSize-1]<9)
    {
       digits[digitsSize-1]=digits[digitsSize-1]+1;
       int *ans=malloc(digitsSize*sizeof(int));
       for(int i=0;i<digitsSize;i++)
       {
        ans[i]=digits[i];
       }
       *returnSize=digitsSize;
       return ans;
    }
    else
    {
        int p=1;
        
        for(int i=digitsSize-1;i>=0;i--)
        {   
        
             
            
            int a=p+digits[i];
            if(a>9)
            {
                digits[i]=a%10;
                p=1;
            }
            else
            {
                digits[i]=a;
                break;
            }
        }
        if(digits[0]==0)
        {  int *ans=malloc((digitsSize+1) *sizeof(int));
            for(int i=0;i<digitsSize;i++)
            {
               ans[i+1]=digits[i];
            }
            ans[0]=1;
            *returnSize=digitsSize+1;
            return ans;
        }
        int *ans=malloc(digitsSize*sizeof(int));
        for(int i=0;i<digitsSize;i++)
        {
            ans[i]=digits[i];
        }
        *returnSize=digitsSize;
        return ans;
    }
    return 0;
}
