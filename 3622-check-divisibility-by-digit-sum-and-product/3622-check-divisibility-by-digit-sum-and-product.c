bool checkDivisibility(int n) {
    int p=1;
    int b=0;
    int s=n;
    int v=n;
    while(s!=0)
    {
        int a=s%10;
        p=p*a;
        s=s/10;
    }
    while(v!=0)
    {
        int a=v%10;
        b=b+a;
        v=v/10;
    }
    int g=p+b;
    if(n%g==0)
    {
        return true;
    }
    return false;

    
}