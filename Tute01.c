/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

//variable declaration
int mark1, mark2;
float sum,avg;

//enter the marks 
printf("Enter mark 1 =");
scanf("%d",&mark1);

printf("Enter mark 2 =");
scanf("%d",&mark2);

//Calculations
sum=(float)mark1+mark2;
avg=sum/2;

//output 
printf("Average is = %f",avg);




  
  return 0;
}

