#include<stdio.h>
void main()
{
    int count,i,a[100],n,fre[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    scanf("%d",&a[i]);
    fre[i]=-1;
    }


   for(i=0;i<n;i++)
   {  count=1;
     for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fre[j]=0;
            }
        }
        if(fre[i]!=0)
        {

    fre[i]=count;
        }
   }
        for(i=0;i<n;i++)
        {
         if(fre[i]!=0)
         {

         printf("%d occurs %d times\n",a[i],fre[i]);

         }
        }
   }

