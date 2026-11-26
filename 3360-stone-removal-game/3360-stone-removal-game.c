bool canAliceWin(int n) {
    int m=10;
    int t=0;
    while(n>=m)
    {
        n=n-m;
        m--;
        t++;
    }
    if(t%2!=0)
    {
        return true;
    }
    return false;
}