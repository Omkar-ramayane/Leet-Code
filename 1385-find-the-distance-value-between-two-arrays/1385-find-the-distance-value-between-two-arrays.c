int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int c=0;
    for(int i=0;i<arr1Size;i++)
    {   int f=1;
        for(int j=0;j<arr2Size;j++)
        {
            int a=arr1[i]-arr2[j];
            
            if(a<0)
            {
                a=a*-1;
            }
            if(a<=d)
            {  
                f=0;
                break;
               // c++;
            }
        }
        if(f==1)
        {
            c++;
        }
    }
    return c;
}