#include<stdio.h>
int main()
{
    int i,n,num,count,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }
      printf("%d is occuring %d times",num,count);
      return 0;
}
