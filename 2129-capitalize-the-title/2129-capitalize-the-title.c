char* capitalizeTitle(char* title) {
    int l=strlen(title);
    for(int i=0;i<l;i++)
    {
          if(title[i]>='A'&&title[i]<='Z')
        {
            title[i]=title[i]+32;
        }
    }
    int fc=0;
    int f=0;
    for(int i=0;i<l;i++)
    {   int k=i;   
    

        while(k<l&&title[k]!=' '&&f<=0)
        {
            fc++;
            k++;

        }
        fc=fc-1;
        if(fc<2)
        {
            f++;
        }
        if(fc>2)
        { 
            if(title[0]>'Z')
             title[0]=title[0]-32;
             f++;
        }
        if(title[i]==' ')
        {  int j=i+1;
        int c=0;
            while(j<l&&title[j]!=' ')
            {
                
                c++;
                j++;
            }
            if(c>2)
            {
                if(title[i+1]>'Z')
                {
                    title[i+1]=title[i+1]-32;
                }
            }
        }
    }
        return title;
    
}
        
   