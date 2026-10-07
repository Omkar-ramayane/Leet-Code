bool isAnagram(char* s, char* t) {
    
    int f[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        f[s[i]-'a']++;
    }
    for(int j=0;t[j]!='\0';j++)
    {
        f[t[j]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(f[i]!=0)
        {
            return false;
        }
    }
   
       return true;
    
}