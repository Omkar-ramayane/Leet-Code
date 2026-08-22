bool isMatch(char* s, char* p) {
    
   
    int i = 0;
    int j = 0;

    int star=-1;
    int match=0;

    while(s[i]!='\0')
    {
       
        if(p[j]==s[i]||p[j]=='?')
        {
            i++;
            j++;
        }

      
        else if(p[j]=='*')
        {
            star=j;
            match=i;
            j++;
        }

       
        else if(star!=-1)
        {
            j=star+1;
            match++;
            i=match;
        }

       
        else
        {
            return false;
        }
    }
    while (p[j] == '*')
    {
        j++;
    }

    return p[j] == '\0';

    
}