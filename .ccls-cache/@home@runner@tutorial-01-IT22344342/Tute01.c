/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float sub1, sub2 = 0;
  float average = 0;

  printf("Enter marks of first subject: ");
  scanf("%lf", &sub1);

  printf("Enter marks of second subject: ");
  scanf("%lf", &sub2);

  average = (sub1 + sub2) / 2;

  printf("Average mark is %f", average);
  
  return 0;
}

