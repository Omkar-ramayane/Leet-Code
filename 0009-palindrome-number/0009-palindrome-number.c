bool isPalindrome(int x) {
    if(x<0)
    {
        return false;
    }
    long res=0;
    long b=x;
    while(b>0)
    {
        int a=b%10;
        res=res*10+a;
        b=b/10;
    }
    if(res==x)
    {
        return true;
    }
    return false;
}