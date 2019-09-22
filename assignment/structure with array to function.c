#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[100];


} s[3];

void accept(struct student sptr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n enter student rollno :");
        scanf("%d",&sptr[i].rollno);
        printf("\nenter the name of the student");
        scanf("%s",sptr[i].name);
    }
}
    void print(struct student sptr[],int n)
    {
     int i;
     for(i=0;i<n;i++)
     {
        printf("\nrollno :%d",sptr[i].rollno);
        printf("\nname :%s",sptr[i].name);
    }
    }
    void main()
    {
        int i;
        accept(s,3);
        print(s,3);
    }

