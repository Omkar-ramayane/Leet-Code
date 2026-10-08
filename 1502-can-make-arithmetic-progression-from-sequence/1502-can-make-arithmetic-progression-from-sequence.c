int cm(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}
bool canMakeArithmeticProgression(int* arr, int arrSize) {
    qsort(arr,arrSize,sizeof(int),cm);
    int c=arr[0]-arr[1];
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]-c!=arr[i+1])
        {
            return false;
        }
    }
    return true;
    
}