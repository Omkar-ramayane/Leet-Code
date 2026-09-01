

char * mergeAlternately(char * word1, char * word2){
    
    int l=strlen(word1);
    int l2=strlen(word2);
    char *ans=malloc(500);

    int la=l+l2;
    int y=0;
    if(l>l2)
    {
        y=l2;
    }
    else
    {
        y=l;
    }
   
    int z=1;
   int w1=0;
   int w2=0;
   int j=0;
    for(int i=0;i<la;i++)
    {
       
        if(w2==l2||i==0||i%2==0&&word1[w1]!='\0')
        {
            ans[j]=word1[w1];
            w1++;
            j++;
           // y++;
            z++;
        }
        else if(word2[w2]!='\0'||w1==l)
        {
            ans[j]=word2[w2];
            j++;
            w2++;
           // y++;
            z++;
        }
        
    }
    ans[la]='\0';
    return ans;


}