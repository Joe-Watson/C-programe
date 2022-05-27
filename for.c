#include<stdio.h>
void main()
{
    int numberGuess=0;
    int tried=0;
    int myNumber=2;
  printf("Welcome to Guess Game");
  printf("\nYou can Guess number from 0 to 20 ");

  for(int i=5; i>tried;i--)
  {
      
       printf("\n You have left %d",i);
        printf("\n Enter your Guess number:-");
         scanf("%d",&numberGuess);

      if(myNumber==numberGuess)
      {
          printf("\n Congratulation Your Guess right My number is %d",myNumber);
          break;
      }
      else
      {
            printf("\n My Number less then your Number");
          
        
      }
      
  }

}