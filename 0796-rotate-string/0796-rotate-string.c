bool rotateString(char* s, char* goal) {
    int l=strlen(s);

    for(int i=0;i<l;i++)
    {
        char temp=s[0];
         for(int j=0;j<l-1;j++)
         {
            s[j]=s[j+1];
         }
         s[l-1]=temp;
         if(strcmp(s,goal)==0)
         {
            return true;
         }

    }
    return false;
    
}