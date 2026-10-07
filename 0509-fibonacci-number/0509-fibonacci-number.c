

int fib(int n){
    int s=0,f=1,e=0;
    for(int i=0;i<n;i++)
    {
            e=s+f;
            f=s;
            s=e;


    }
    return e;

}