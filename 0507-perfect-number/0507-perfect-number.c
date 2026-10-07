bool checkPerfectNumber(int num) {

   int factor=0;
   for(int i=1;i<=num/2;i++)
   {
    if(num%i==0)
    {
    factor=factor+i;;
   }
   }


if(num==factor)
{
    return true;
}
else
{
return false;
}
}