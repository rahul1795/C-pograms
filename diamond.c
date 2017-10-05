#include <stdio.h>
#include <stdlib.h>

int main()
{  
	int i,j,k,no,s;
    char sym;
  
  printf("\nenter the symbol of diamond : ");
   scanf("%c",&sym);

   printf("enter the no of lines of diamond (even) : ");
   scanf("%d",&no);

    s=(no/2)+1;

   for(i=1;i<=(no/2)+1;i++)
   {

      for(j=1;j<=s;j++)
      {
        printf(" ");
      }
       s--;

     for(k=1;k<=(2*i)-1;k++)
     {
          printf("%c",sym);
     }
        printf("\n");
   }
// as every time line after midle line starts with 2 saces
    s=2; 

   for(i=no/2;i>=1;i--)
    {
      
      for(j=1;j<=s;j++)
      {
        printf(" ");
      }
      s++;
      for(k=0;k<(2*i)-1;k++)
      {
          printf("%c",sym);
      }
              printf("\n");

    }
	return 0;

}