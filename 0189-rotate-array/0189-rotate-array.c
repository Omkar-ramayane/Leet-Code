/*void d(int *nums,int numsSize)
{
    int s=numsSize;
    int m=0;
    int f=m;
       int e=s-2;
        while(f<e)
        {
            int temp=nums[f];
            nums[f]=nums[e];
            nums[e]=temp;
            f++;
            e--;

        }
    


}
void rev(int *nums,int numsSize,int k)
{
    
    int y=0;
      int z=y,v=numsSize-1;
    while(z<v)
    {
        int temp=nums[z];
        nums[z]=nums[v];
        nums[v]=temp;
        z++;
        v--;
    }
    

}
void r(int *nums,int numsSize,int k)
{     
     if(k==0)
    return;
     d(nums,numsSize);
        rev(nums,numsSize,k); 

        r(nums,numsSize,k-1);

}
void rotate(int* nums, int numsSize, int k) { 
        
        r(nums,numsSize,k);
    
    
}*/


void reverse(int *nums, int start, int end)
{
    while(start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    if(numsSize == 0)
        return;

    k = k % numsSize;

    // Reverse the complete array
    reverse(nums, 0, numsSize - 1);

    // Reverse first k elements
    reverse(nums, 0, k - 1);

    // Reverse remaining elements
    reverse(nums, k, numsSize - 1);
}