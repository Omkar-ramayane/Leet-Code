bool validDigit(int n, int x) {
    if(n==0)
    {
        return false;
    }
    int c=0;
    int b=n;
    while(b)
    {
        c++;
        b=b/10;
    }
    int arr[c];
    int i=0;
    while(n)
    {
        arr[i]=n%10;
        i++;
        n=n/10;
    
    }
    for(int i=c-1;i>=0;i--)
    {
        if(arr[c-1]==x)
        {
            return false;
        }
        if(arr[i]==x)
        {
            return true;
        }
    }
     return false;
}