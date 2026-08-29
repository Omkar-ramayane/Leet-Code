long long sumAndMultiply(int n) {
    long long res=0;
    long long a=n;
    while(a!=0)
    {
        int b=a%10;
        if(b!=0)
        {
            res=res*10+b;
        }
        a=a/10;
    }
    long long p=0;
    while(res!=0)
    {
        int b=res%10;
        p=p*10+b;
        res=res/10;
    }
    long long sum=0;
    while(n!=0)
    {
        int y=n%10;
        if(y!=0)
        {
            sum=sum+y;
        }
        n=n/10;
    }
    return sum*p;
    
}