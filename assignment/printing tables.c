#include<stdio.h>
void main()
{
    int i,n,t;
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        t=n*i;
      printf("%d*%d=%d",n,i,t);
    printf("\n");
    }
}
