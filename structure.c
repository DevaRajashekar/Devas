#include<stdio.h>
typedef struct
    {
    int roll;
    char a[50];
    float perc;
        }student;
void main()
{
student st[2],*p;
p=st;
printf("enter student detrails");
for(int i=0;i<2;i++)
{
    scanf("%d%s%f",&p->roll,p->a,&p->perc);
    p++;
}
printf("student details are");
p=st;
for(int i=0;i<2;i++)
{
    printf("\t%d\t%s\t%f",p->roll,p->a,p->perc);
    p++;
}

// helloooooooooooo

}
