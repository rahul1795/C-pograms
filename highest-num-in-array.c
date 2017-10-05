#include <stdio.h>

int main()
{
   int n,tem;

   printf("enter the lenght of array\n");
   scanf("%d",&n);

    int ar[n];

   printf("enter the elements of array\n");

   for(int i=0;i<n;i++)
     scanf("%d",&ar[i]);

// finding the highest number

 for(int i=0;i<n;i++)
{
   if(ar[0]<ar[i])
{
   tem=ar[0];
   ar[0]=ar[i];
   ar[i]=tem;

}

}
   printf("the highest elements of array is : %d\n",ar[0]);
ø
	return 0;

}