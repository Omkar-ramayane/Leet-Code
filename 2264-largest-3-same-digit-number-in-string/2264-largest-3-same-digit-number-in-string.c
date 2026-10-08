char* largestGoodInteger(char* num) {
    int l=strlen(num);
    int k=0;
    int j=1;
    int c=0;
    
    for(int i=2;i<l;i++)
    {
        if(num[k]==num[j])
        {
            if(num[j]==num[i])
            {
               c++;
            }
        }
        k++;
        j++;
    }
    if(c>0)
    {
    int arr[c];
    int h=0;
    int g=1;
    int f=0;

     for(int i=2;i<l;i++)
    {
        if(num[h]==num[g])
        {
            if(num[g]==num[i])
            {
                arr[f]=num[h]-48;
                f++;
               
            }
        }
        h++;
        g++;
    }
    
    int max=-1;
    for(int i=0;i<c;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int a=max;
    char *ans=malloc(4);
    ans[0]=a+48;
    ans[1]=a+48;
    ans[2]=a+48;
    ans[3]='\0';
    return ans;
    }
    
    
    if(c==0)
    {
    
        char *ans=malloc(sizeof(char));
        ans[0]='\0';
        return ans;
    }
    

    return NULL;

}