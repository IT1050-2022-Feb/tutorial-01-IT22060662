/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main begins program execution 
int main() {
  //variable declaration
	int i, num, sum = 0;
	
	//user input
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	//for loop condition
	for (i = 1; i <= num; ++i) 
	{
        sum += i;
    }
	//displaying the output
    printf("Sum = %d\n", sum);
  
	return 0;//end of main function

}

