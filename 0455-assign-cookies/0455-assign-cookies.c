int cms(const void *a,const void*b)
{
    return(*(int*)a-*(int*)b);
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g,gSize,sizeof(int),cms);
    qsort(s,sSize,sizeof(int),cms);
   
    if(sSize==1)
    {
        if(s[0]>=g[0])
        {
            return 1;
        }
    }
    int c=0;
    int i=0,j=0;
    while(i<gSize&&j<sSize)
    {
        if(g[i]<=s[j])
        {
            i++;
            j++;
            c++;
        }
        else
        {
            j++;
        }

    }
    
    return c;
}