#include<stdio.h>
void main()
{
    int i,j,n,s;

   scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(s=0;s<=i;s++)
        {
            printf(" ");
        }
        for(j=n;j>i;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}
