#include<stdio.h>
void main()
{

  int i,j,n;
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

    for(j=1;j<=n;j++)
    {
        if(i==1||i==n||j==1||j==n||i==j||j==(n-i+1))
        {
            printf("*");
        }
        else
            printf(" ");
    }
    printf("\n");
    }
}
