char* convertToBase7(int num) {
    long long b=num;
    
    char *ans=malloc(50000);
    if(num==0)
    {
         ans[0]='0';
        ans[1]='\0';
        return ans;
    }
    int i=0;
    int sa=0;
    if(num<0)
    {
        sa=1;
        num=-num;
    }
    
    
    while(num!=0)
    {
        int a=num%7;
        if(sa==1)
        {
            ans[0]='-';
            i++;
            sa=0;
        }
        ans[i]=a+48;
        i++;
        num=num/7;
    }
    ans[i]='\0';
    int l=strlen(ans);
    int s=0;int e=l-1;
    if(b<0)
    {
        s=1;
    }
    while(s<e)
    {
        char temp=ans[s];
        ans[s]=ans[e];
        ans[e]=temp;
        s++;
        e--;
    }
    return ans;
    
}