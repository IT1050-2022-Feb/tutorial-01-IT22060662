/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function declaration
int minimum (int num1, int num2);
int maximum (int num1, int num2);
int multiply (int num1, int num2);

//function main begins program execution 
int main() {
  //variable declaration
   int no1, no2;

  //user input
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

  //calling funtion and displaying the values
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;//end of main function
}
//function implementation for minimum
int minimum (int num1, int num2)
{
	if (num1 > num2)
	{
		return num2;
	}
	else 
	{
		return num1;
	}
}
//function implementation for maximum
int maximum (int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else 
	{
		return num2;
	}
}
//function implementation for multiplication
int multiply (int num1, int num2)
{
	return num1 * num2;
}
