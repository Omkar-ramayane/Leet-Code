bool isPalindrome(char* s) {
    int l=strlen(s)-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    int f=0,e=l;
    int d=1;
    while(f<e)
    {

        while(f<e&& !isalnum(s[f]))
        {
         f++;
        }
        while(f<e&& !isalnum(s[e]))
        {
         e--;
        }
        if(s[f]!=s[e])
        {
            d=0;
            break;
        }
        f++;
        e--;
    }
    if(d)
    {
        return true;
    }
    return false;
    
    
}