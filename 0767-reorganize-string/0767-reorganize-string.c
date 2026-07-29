char* reorganizeString(char* s) {
   int f[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        f[s[i]-'a']++;
    }
    int m=0;
    int index=0;
    for(int i=0;i<26;i++)
    {
        if(f[i]>m)
        {
            m=f[i];
            index=i;
        }
    }
    int n=strlen(s);
    if(m>(n+1)/2)
    {
        return "";
    }
    char *ans=malloc((n+1)*sizeof(char));
    //char ans[n+1];
    ans[n]='\0';
    int pos=0;
    while(f[index]>0)
    {
        ans[pos]=index+'a';
        pos=pos+2;
        f[index]--;
    
    if(pos>=n)
    {
    pos=1;
    }
    }

    for(int i=0;i<26;i++)
    {
        while(f[i]>0)
        {
            ans[pos]=i+'a';
            pos=pos+2;
            //f[i]--;
        
        if(pos>=n)
        {
            pos=1;
        }
        f[i]--;
        }
    }

return ans;
    
}