int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs,costsSize,sizeof(int),(cmp));
    int a=0;
    int c=0;
   
    for(int i=0;i<costsSize;i++)
    {
        a=a+costs[i];
        c++;
        if(a==coins)
        {
            break;
        }
        if(a>coins)
        {
            a=a-costs[i];
            c--;
        }
    }

    return c;
    
}