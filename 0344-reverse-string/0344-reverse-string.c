void reverseString(char* s, int sSize) {
    int f=0,e=sSize-1;
    while(f<e)
    {
        char temp=s[f];
        s[f]=s[e];
        s[e]=temp;
        f++;
        e--;
    }
    
}