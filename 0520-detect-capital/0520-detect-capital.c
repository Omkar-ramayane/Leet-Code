bool detectCapitalUse(char* word) {
    int l=strlen(word);
    int c=0;
    int d=0;
    if(word[0]>='A'&& word[0]<='Z')
    {
        for(int i=1;word[i]!='\0';i++)
        {
            if(word[i]>'Z')
            {
               d++;
            }
        }
        int s=l-1;
        if(d==s||d==0)
        {
        return true;
        }
        else
        return false;
    }
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='A'&&word[i]<='Z')
        {
            c++;
        }
    }
    if(c==l||c==0)
    {
        return true;
    }
    return false;
}