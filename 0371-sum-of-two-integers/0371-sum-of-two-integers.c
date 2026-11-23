int getSum(int a, int b) {
   unsigned int x=(unsigned int)a;
   unsigned int y=(unsigned int)b;
   while(y!=0)
   {
     unsigned int sum=x^y;
     unsigned int c=(x&y)<<1;
     x=sum;
     y=c;
   }
   return (int)x;

}