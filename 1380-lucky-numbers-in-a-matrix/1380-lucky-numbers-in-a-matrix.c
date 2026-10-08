/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *ans=malloc(sizeof(int));
    ans[0]=0;
    int z=0;
   
   
    for(int i=0;i<matrixSize;i++)
    {   int min=matrix[i][0];
        for(int j=0;j<matrixColSize[0];j++)
        {   
        
            if(min>matrix[i][j])
            {
                min=matrix[i][j];
                z=j;
                
            }
        }
        
           int max=min;
           int c=0;
            for(int k=0;k<matrixSize;k++)
            {  
                if(max<matrix[k][z])
                {
                    c++;
                }
               
            }
            if(c==0)
            {
                ans[0]=max;
            }
        }

        
        
    
   if(ans[0]==0)
   {
        *returnSize=0;
        return NULL;
   }
    *returnSize=1;
    
    return ans;
    
}