bool isPalindrome(int x) {
    int y=x;
    long long rev=0;
    if(x<0)
    {
        return false;
    }
    while(x!=0)
    {
        int a=x%10;
        rev=rev*10+a;
        x=x/10;

    }
    if(rev==y)
    {
        return true;
    }
    return false;
   
}