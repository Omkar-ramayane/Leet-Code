int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int a=0;

    for(int i=0;i<numsSize;i++)
    {
            
                if(nums[i][i]>1)
                {
                 int c=0;
                for(int k=1;k*k<=nums[i][i];k++)
                {
                    if(nums[i][i]%k==0)
                    {
                        c++;
                    }
                }
                if(c==1)
                {
                    if(a<nums[i][i])
                    {
                      a= nums[i][i];
                    }
                }
                }
                
            
    }
        
    

    
    
        for(int j=0;j<numsColSize[0];j++)
        {   
            
             if(nums[j][numsColSize[0]-1-j]>1)
            {
                int c=0;
                  
                for(int k=1;k*k<=nums[j][numsColSize[0]-1-j];k++)
                {
                    if(nums[j][numsColSize[0]-1-j]%k==0)
                    {
                        c++;
                    }
                }
                if(c==1)
                {
                    if(a<nums[j][numsColSize[0]-1-j])
                    {
                        a=nums[j][numsColSize[0]-1-j];
                    }
                }
            }
            
        }
    
return a;
    
}