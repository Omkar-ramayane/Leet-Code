int lengthOfLastWord(char* s) {
    int l=strlen(s)-1;
    if(l==0)
    {
        return 1;
    }
    int c=0;
    while(l>=0)
    {
        if(s[l]==' '&&c==0)
        {
        l--;
        continue;
        }
        if(s[l]!=' ')
        {
            c++;
        }
        if(s[l]==' '||l==0)
        {
            break;
        }
        l--;
        
    }
    return c;
}