#include <stdio.h>

int fibo(int n)
{
   if(n==1 || n==2)
   	return 1;
   return (fibo(n-1)+fibo(n-2));
return 0;
}


int main()
{
	 int choice,l,i;

  printf("select:\n1.print fibonacci series.\n2.find element in fibonacci series\n");
  scanf("%d",&choice);

  if(choice==1)
  {
     printf("lenght of series : ");
      scanf("%d",&l);

     for(int k=1;k<=l;k++)
          printf("%d ",fibo(k));
      
}

else if(choice==2)
{
     printf("element you want to search : ");
      scanf("%d",&i);

     printf("\nthe element to requested is %d\n",fibo(i));


}
       printf("\n");

	return 0;
}