int cmp(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}
int minimumCost(int* cost, int costSize) {
    qsort(cost,costSize,sizeof(int),cmp);
    int ans=0;
    int c=1;
    for(int i=0;i<costSize;i++)
    {
        if(i!=0)
            {
                c++;
            }
          if(c%3==0)
          {
            continue;
          }
           
            ans=ans+cost[i];
            
    }
    return ans;
}