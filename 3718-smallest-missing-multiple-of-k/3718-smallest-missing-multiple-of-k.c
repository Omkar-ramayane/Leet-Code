int missingMultiple(int* nums, int numsSize, int k) {
    
    int x=1;
    int f=0;
    while(1)
    {
        if(x%k==0)
        {  
            int n=1;
            for(int i=0;i<numsSize;i++)
            {
                if(x==nums[i])
                {
                    n=0;
                   // break;
                }
                
            }
            if(n==1)
            {
                return x;
                break;
            }
            //x++;
        }
        x++;
    }
        return 0;
    

}


    