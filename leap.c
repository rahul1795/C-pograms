#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   
   printf("enter the year you want to check : ");
   scanf("%d",&year);

   if(year % 4==0)
   {
      
      if(year % 100==0)
       {

         if(year % 400==0)
          {
            printf("year %d is a leap year \n",year);
          }

          else
           printf("year %d is not a leap year \n",year);
       }

        else
    	   printf("year %d is a leap year \n",year);
   }

   else
   printf("year %d is not a leap year \n",year);

}