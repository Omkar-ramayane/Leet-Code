int lengthOfLongestSubstring(char* s) {
    int max=0;
    for(int i=0;s[i]!='\0';i++)
    {
        int fr[265]={0};
        int c=0;
        for(int j=i;s[j]!='\0';j++)
        {
            if(fr[s[j]]==1)
            {
                break;
            }
            fr[s[j]]=1;
            c++;
        }
        if(c>max)
        {
            max=c;
        }
    }
    return max;
}