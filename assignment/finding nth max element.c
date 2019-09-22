#include<stdio.h>
void main()
{
    int i,n,a[100],j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
                {
                t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {

        printf("%d",a[i]);
    }
    scanf("%d",&i);
    printf(" %d max is %d",i,a[i-1]);
}
