int largestAltitude(int* gain, int gainSize) {
    int c=0;
    int h=0;
    for(int i=0;i<gainSize;i++)
    {
        c=c+gain[i];
        if(c>h)
        {
            h=c;
        }
    }
    return h;
}