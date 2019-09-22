#include<stdio.h>
void main()
{

    int i,r,s,j;
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {

        for(s=1;s<=r-i;s++)
        {
            printf(" ");
        }
            for(j=0;j<=i;j++)
            {
           printf(" *");
        }

        printf("\n");

    }
}
