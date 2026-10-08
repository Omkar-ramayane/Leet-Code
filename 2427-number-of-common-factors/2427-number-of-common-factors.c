int commonFactors(int a, int b) {


    int min;
    if(a>b)
    {
        min=a;
    }
    else
    {
    min=b;
    }

    int count=0;
    for(int i=1;i<=min;i++)
    {
       // count ++;
        if((a%i==0) && (b%i==0))
        {
            count++;
        }
        
    }
    return count;
}

    
    
