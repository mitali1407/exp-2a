# exp-2a

The given program is to calculate the sum and average of marks.
Variable i is defined as integer.
for loop is used and variable i starts from 0 to 10 with an increment of 1.
Scanf function is then used to scan the marks.
Followed by the print statement: "Enter marks for Student:" using the prinf function.

Another for loop is used to now calculate the sum and average of marks.
Sum is the addition of all the marks.
Average is the sum of all marks divided by the number of students. 
In this case, the total number of students is 10 so the sum of marks is divided by 10.

In the end, two print statements are printed using the printf function:

"Sum of the numbers:"
"Average of the numbers:"

![image](https://user-images.githubusercontent.com/110607289/230779174-cff7f55f-258b-4946-8bc6-e799dcdd2a63.png)


Code:
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

