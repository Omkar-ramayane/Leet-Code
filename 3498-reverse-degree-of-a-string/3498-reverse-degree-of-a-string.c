int reverseDegree(char* s) {
    int ans=0;
    int jo=1;
    //int a=26,b=25,c=24,d=23,e=22,f=21,g=20,h=19,i=18,j=17,k=16,l=15,m=14,n=13,o=12,p=11,q=10,r=9,s=8,t=7,u=6,v=5,w=4,x=3,y=2,z=1;
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        {
            ans=ans+(26*jo);
            jo++;
        }
        else if(s[i]=='b')
        {
            ans=ans+(25*jo);
            jo++;
        }
         else if(s[i]=='c')
        {
            ans=ans+(24*jo);
            jo++;
        } else if(s[i]=='d')
        {
            ans=ans+(23*jo);
            jo++;
        } else if(s[i]=='e')
        {
            ans=ans+(22*jo);
            jo++;
        } else if(s[i]=='f')
        {
            ans=ans+(21*jo);
            jo++;
        } else if(s[i]=='g')
        {
            ans=ans+(20*jo);
            jo++;
        } else if(s[i]=='h')
        {
            ans=ans+(19*jo);
            jo++;
        } else if(s[i]=='i')
        {
            ans=ans+(18*jo);
            jo++;
        } else if(s[i]=='j')
        {
            ans=ans+(17*jo);
            jo++;
        } else if(s[i]=='k')
        {
            ans=ans+(16*jo);
            jo++;
        } else if(s[i]=='l')
        {
            ans=ans+(15*jo);
            jo++;
        } else if(s[i]=='m')
        {
            ans=ans+(14*jo);
            jo++;
        } else if(s[i]=='n')
        {
            ans=ans+(13*jo);
            jo++;
        } else if(s[i]=='o')
        {
            ans=ans+(12*jo);
            jo++;
        } else if(s[i]=='p')
        {
            ans=ans+(11*jo);
            jo++;
        } else if(s[i]=='q')
        {
            ans=ans+(10*jo);
            jo++;
        } else if(s[i]=='r')
        {
            ans=ans+(9*jo);
            jo++;
        } else if(s[i]=='s')
        {
            ans=ans+(8*jo);
            jo++;
        } else if(s[i]=='t')
        {
            ans=ans+(7*jo);
            jo++;
        } else if(s[i]=='u')
        {
            ans=ans+(6*jo);
            jo++;
        } 
         else if(s[i]=='v')
        {
            ans=ans+(5*jo);
            jo++;
        } else if(s[i]=='w')
        {
            ans=ans+(4*jo);
            jo++;
        } else if(s[i]=='x')
        {
            ans=ans+(3*jo);
            jo++;
        } else if(s[i]=='y')
        {
            ans=ans+(2*jo);
            jo++;
        }
        else if(s[i]=='z')
        {
            ans=ans+(1*jo);
            jo++;
        }
        else
        {
            break;
        }
        
    }
    return ans;
    
}