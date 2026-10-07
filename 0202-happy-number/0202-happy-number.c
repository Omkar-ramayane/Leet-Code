bool isHappy(int n) {
    if(n<=0)
    {
        return false;
    }
    int d=n;
    while(n>=1)
    {  int s=0,a=0;
        while(d>=1)
        {
            s=d%10;
            a=a+s*s;
           d= d/10;
        }
        if(a==1)
        {
            return true;
        }
        if(a==4)
        {
            return false;
        }
        n=a;
        d=a;
    }
    return false;
    
}