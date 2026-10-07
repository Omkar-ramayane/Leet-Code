int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    if (timeSeriesSize==0)
    return 0;
int t=0;
    for(int i=0;i<timeSeriesSize-1;i++)
    {
        int gap=timeSeries[i+1]-timeSeries[i];
        if(gap>=duration)
        {
        t=t+duration;
        }
        else
        {
        t=t+gap;
        }
    }
    t=t+duration;
    return t;
    
}