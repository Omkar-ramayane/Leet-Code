class Solution {
public:
    string countAndSay(int n) {
        char *ans=new char[5000];
        strcpy(ans,"1");
        for(int i=2;i<=n;i++)
        {
            char *temp=new char[5000];
            int k=0;
            int c=1;
            for(int j=0;ans[j]!='\0';j++)
            {
                if(ans[j]==ans[j+1])
                {
                    c++;
                }
                else
                {
                    temp[k++]=c+48;
                    temp[k++]=ans[j];
                    c=1;
                }
                     }

                     temp[k]='\0';
                     delete[] ans;
                     ans=temp;
        }
        return string (ans);
        
    }
   // return ans;
};