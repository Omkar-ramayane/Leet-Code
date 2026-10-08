int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int r=0;
    for(int i=0;i<accountsSize;i++)
    {
        int s=0;
        for(int j=0;j<accountsColSize[0];j++)
        {
            s=s+accounts[i][j];
        }
        if(r<s)
        {
            r=s;
        }
    }
    return r;
}