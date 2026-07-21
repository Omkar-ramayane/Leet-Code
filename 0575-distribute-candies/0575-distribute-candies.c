int cmp(void const*a,void const*b)
{
    return(*(int*)a-*(int*)b);
}
int distributeCandies(int* candyType, int candyTypeSize) {
    qsort(candyType,candyTypeSize,sizeof(int),cmp);
    int c=0;

    for(int i=1;i<candyTypeSize;i++)
    {   
        if(candyType[i]==candyType[i-1])
        {
            c++;
        }
       
    }
    int d= candyTypeSize/2;
    int a= candyTypeSize-c;
    if(d>a)
    {
        return a;
    }
    return d;
    
}