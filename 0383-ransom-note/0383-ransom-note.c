bool canConstruct(char* ransomNote, char* magazine) {
    int f=0;
    
    for(int i=0;ransomNote[i]!='\0';i++)
    {   f=0;
        for(int j=0;magazine[j]!='\0';j++)
        {
            if(ransomNote[i]==magazine[j])
            {
                magazine[j]='#';
                f=1;
                break;
            }
        }
        if(f==0)
        {
            break;
        }
    }
    if(f)
    {
        return true;
    }
    return false;
    
}