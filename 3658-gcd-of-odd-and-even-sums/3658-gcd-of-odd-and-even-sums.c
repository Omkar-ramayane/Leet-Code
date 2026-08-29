int gcdOfOddEvenSums(int n) {
    if(n==1)
    {
        return 1;
    }
    int c=0;
    int i=1;
    int e=0;
    int o=0;
    int j=1;
    int co=0;
    while(c!=n)
    {
        if(i%2==0)
        {
            e=e+i;
            c++;
        }
        i++;
       // c++;
        if(c==n)
        {
        break;
        }
    }
    while(co!=n)
    {
       if(j%2!=0)
       {
        o=o+j;
        co++;
       }
       j++;
      // co++;
       if(co==n)
       {
       break;
       }
    }
    int l=0;
    if(e>o)
    {
        l=e;
    }
    else
    {
        l=o;
    }
    int ans=0;
    for(int i=2;i<l;i++)
    {
        int z=0;
        if(e%i==0&&o%i==0)
        {
            z=i;
        }
        if(ans<z)
        {
            ans=z;
        }
    }
    return ans;
}