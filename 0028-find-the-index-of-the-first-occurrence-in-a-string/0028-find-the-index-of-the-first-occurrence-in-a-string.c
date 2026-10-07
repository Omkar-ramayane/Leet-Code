int strStr(char* haystack, char* needle) {
      int i,j;
      if(needle[0]=='\0')
      {
        return 0;
      }
      for(i=0;haystack[i]!='\0';i++)
      {
         for(j=0;haystack[j]!='\0'&&haystack[i+j]!='\0';j++)
         {
            if(haystack[i+j]!=needle[j])
            {
                break;
            }
         }
         if(needle[j]=='\0')
         return i;
      }
      return -1;

    
}