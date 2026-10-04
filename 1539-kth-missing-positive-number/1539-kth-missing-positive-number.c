int findKthPositive(int* arr, int arrSize, int k) {
    int c=0;
    int l=1;
    int i=0;
    while(c!=k)
    {
        if(arr[i]==l)
        {
            if(i==arrSize-1)
            {
                break;
            }
            i++;
            l++;
        }
        else
        {
            c++;
            l++;
            
        }
        if(c==k)
        {
            return l-1;
        }
        
    }
   return l+k-c;
    
}