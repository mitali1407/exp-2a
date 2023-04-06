#include <windows.h>

#include <stdio.h>

int main()
{
int marks[10],i,sum=0,avg;
for (i=0; i<10; i++)
{
    scanf("%d",&marks[i]);
    printf("\n Enter Marks for Student %d:", i+1);
}
for (i=0; i<10; i++)
{
    sum=marks[i]+sum;
    avg=sum/10;
}
printf("\n Sum of the numbers: %d",sum);
printf("\n Average of the numbers: %d",avg);
}
