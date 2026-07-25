bool isIsomorphic(char* s, char* t) {
    if(strlen(s)!=strlen(t))
    {
        return  false;
    }
    int s1[256];
    int s2[256];
    for(int i=0;i<256;i++)
    {
        s1[i]=-1;
        s2[i]=-1;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        unsigned char ch1=s[i];
        unsigned char ch2=t[i];
        if(s1[ch1]==-1&&s2[ch2]==-1)
        {
            s1[ch1]=ch2;
            s2[ch2]=ch1;
        }
        else if(s1[ch1]!=ch2||s2[ch2]!=ch1)
        {
            return false;
        }
    }
    return true;
    
}