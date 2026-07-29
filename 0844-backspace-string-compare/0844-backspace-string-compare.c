bool backspaceCompare(char* s, char* t) {
    int l1=strlen(s);
    int l2=strlen(t);

    

    for(int i=0;i<l1;i++)
    {
        if(s[i]=='#'&&i!=0)
        {

            for(int k=i-1;k<l1-1;k++)
            {
                s[k]=s[k+1];
            }
           // t[l2]='\0';
            l1--;
            i--;
             s[l1]='\0';
            for(int j=i;j<l1-1;j++)
            {
                s[j]=s[j+1];
            }
            l1--;
            i--;
            s[l1]='\0';

        }
    }

     for(int i=0;i<l2;i++)
    {
        if(t[i]=='#'&&i!=0)
        {
            
            for(int k=i-1;k<l2-1;k++)
            {
                t[k]=t[k+1];
            }
            l2--;
            i--;
            t[l2]='\0';
           // l1--;
            for(int j=i;j<l2-1;j++)
            {
                t[j]=t[j+1];
            }
            l2--;
            t[l2]='\0';
            i--;

        }
    }
    for(int i=0;i<l1;i++)
    {
        if(s[i]=='#')
        {
            for(int k=i;k<l1-1;k++)
            {
                s[k]=s[k+1];
            }
            i--;
            l1--;
            s[l1]='\0';
        }

    }
    for(int i=0;i<l2;i++)
    {
        if(t[i]=='#')
        {
            for(int k=i;k<l2-1;k++)
            {
                t[k]=t[k+1];
            }
            i--;
            l2--;
            t[l2]='\0';
        }

    }
    if(l1!=l2)
    {
        return false;
    }

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=t[i])
        {
            return false;
        }
    }
    return true;   
}