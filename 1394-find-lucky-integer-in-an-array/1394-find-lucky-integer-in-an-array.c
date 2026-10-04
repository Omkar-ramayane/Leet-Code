int cmp(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}
int findLucky(int* arr, int arrSize) {
    qsort(arr,arrSize,sizeof(int),cmp);
    for(int i=0;i<arrSize;i++)
    {
        int a=arr[i];
        int c=0;
        for(int j=0;j<arrSize;j++)
        {
            if(a==arr[j])
            {
                c++;
            }
        }
        if(c==a)
        {
            return a;
        }
    }
    return -1;
}