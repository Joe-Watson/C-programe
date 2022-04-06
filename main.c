/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main ()
{
  int a, b;
  float result;
  char operater;
  printf ("Enter your first intergernumber\n");
  scanf ("%d", &a);
  printf ("Enter your second interger number\n ");
  scanf ("%d", &b);
  printf ("Enter operator any of them( +,-,*,/and %):-\n");
  scanf ("%s", &operater);
  switch (operater)
    {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      result = a / b;
      break;
    case '%':
      result = a % b;
      break;
    default:
      printf ("Your Enter invaild oparator");
      break;


    }
    printf(" Your result %f",result);

}
