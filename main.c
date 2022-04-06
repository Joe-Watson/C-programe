
#include <stdio.h>

void main ()//main function 
{
  int a, b;
  float result;
  char operater;
  printf ("Enter your first intergernumber\n");//asking user for input  
  scanf ("%d", &a);//storing input
  printf ("Enter your second interger number\n ");//asking user for input  
  scanf ("%d", &b);//storing input
  printf ("Enter operator any of them( +,-,*,/and %):-\n");// user for choose orertor to perform
  scanf ("%s", &operater);//storing input
  switch (operater) //Switch statement
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
    printf(" Your result %f",result);//print result 

}
