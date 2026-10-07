double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int news=nums1Size+nums2Size;
    int arr[news];
    int i=0;
   
    for(i=0;i<nums1Size;i++)
    {
        arr[i]=nums1[i];
    }
    int k=i;
     for(int s=0;s<nums2Size;s++)
    {
        arr[k]=nums2[s];
        k++;
    }
    for(int i=0;i<news;i++)
    {
        for(int j=i+1;j<news;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(news%2!=0)
    {
        return arr[news/2];
    }
    else
    return (arr[news/2-1]+arr[news/2])/2.0;
}