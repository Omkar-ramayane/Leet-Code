int maxProduct(int n) {
    int y=n;
    int c=0;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    int arr[c];
    int i=0;
    while(y!=0&&i<c)
    {
        int a=y%10;
        arr[i]=a;
        i++;
        y=y/10;
    }

    int p=0;
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            int d=arr[i]*arr[j];
            if(d>p)
            {
                p=d;
            }
        }
    }
    return p;
}