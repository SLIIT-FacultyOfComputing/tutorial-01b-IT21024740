/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int number,sum,total=0;

//keyboard input 
printf("Enter the number =");
scanf("%d",&number);

//for loop
  for (sum=1;sum<(number+1);sum++)
  {
    total = total  +  sum;
   // printf("%d",sum);
  }
  //output
  printf("Total is =%d",total);
  
  return 0;
}

