bool judgeCircle(char* moves) {

    int r=0,l=0,u=0,d=0;
    for(int i=0;moves[i]!='\0';i++)
    {
        if(moves[i]=='R')
        {
            r++;
        }
        if(moves[i]=='L')
        {
            l++;
        }
        if(moves[i]=='D')
        {
            d++;
        }
        if(moves[i]=='U')
        {
            u++;
        }
    }
    if(r==l && u==d)
    {
        return true;
    }
    if(r==l&&u==0&&d==0)
    {
        return true;
    }
    if(u==d&&r==0&&l==0)
    {
        return true;
    }
    return false;
    
}