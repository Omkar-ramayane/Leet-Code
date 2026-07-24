char* countAndSay(int n) {
    char*ans=(char*)malloc(50000);
    strcpy(ans,"1");
    for(int i=2;i<=n;i++)
    {
        char*temp=(char*)malloc(50000);
        int k=0;
        int c=1;
        for(int j=0;ans[j]!='\0';j++)
        {
            if(ans[j]==ans[j+1])
            {
                c++;
            }
            else
            {
                temp[k++]=c+'0';
                temp[k++]=ans[j];
                c=1;
            }
        }
        temp[k]='\0';
        free(ans);
        ans=temp;
    }
    return ans;
    
}