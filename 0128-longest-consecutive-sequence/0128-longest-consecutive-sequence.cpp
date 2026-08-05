int cmp(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        qsort(nums.data(),nums.size(),sizeof(int),cmp);

        
        int c=0;
        int f=nums[0];
        int g=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0&&nums[i]==nums[i-1])
            {
                continue;
            }
            if(nums[i]==f)
            {
                c++;
                f++;
            }
            
            else
            {
               f=nums[i];
               f++;
               c=1;
            }

             if(g<c)
            {
                g=c;
            }
        }
       return g; 
    }
};