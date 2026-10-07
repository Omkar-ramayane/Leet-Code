void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int r[matrixSize];
    int c[matrixColSize[0]];
    for(int i=0;i<matrixSize;i++)
    {
        r[i]=0;
    }
    for(int i=0;i<matrixColSize[0];i++)
    {
        c[i]=0;
    }

    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            if(matrix[i][j]==0)
            {     r[i]=1;
                c[j]=1;    
                
            }
        }
    }

     for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            if(r[i]||c[j])
            {
                matrix[i][j]=0;
            }
        }
    }
    
}