int smallestNumber(int n, int t) {
    if(n==1)
    {
        return t;
    }
    
    for(int i=n;i<n*9;i++)
    {
        
        int b=i;
        int p=1;
        while(b!=0)
        {
            int a=b%10;
            p=p*a;
            b=b/10;
        }
        if(p%t==0)
        {
             return i;
        }
    }
    return 0;
}