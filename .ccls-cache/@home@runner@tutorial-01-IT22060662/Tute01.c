/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins program execution 
int main() {
 //variable declration
	int mark1, mark2;
	float avg;
	
	//user input (marks for first subjects)
	printf("Enter mark of first subject: ");
	scanf("%d", &mark1);
	
	//user input (marks for second subjects)
	printf("Enter mark of second subject: ");
	scanf("%d", &mark2);
	
	//average calculation
	avg = (mark1 + mark2) / 2.0;
	
	//displaying average valuen
	printf("Average of the marks: %.2f\n", avg);
  
  return 0;// end of main function
}

