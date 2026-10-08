int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;
    int y=0;
    if(matSize%2==0)
    {
          y=1;
    }
    for(int i=0;i<matSize;i++)
    {
        
            
            
               sum=sum+mat[i][i];
               sum=sum+mat[i][matSize-1-i];
            
            
        
    }
    if(y==0)
    {
        sum=sum-mat[matSize/2][matSize/2];
    }
    return sum;
}