#include <stdio.h>
#include <string.h>

int main()
{
   char names[5][11],tem[11];
   int n,i,j;

   printf("enter the number of students :\n");
   scanf("%d",&n);   

//getting input from user
   for(i=0;i<n;i++)
   {
   	  printf("enter the name of student %d:\n",i+1);
      scanf("%s",names[i]);
   }

//sorting the names in dictnry format
 
 for(i=0;i<n;i++)
 {
    for(j=0;j<n-i-1;j++)
    {
    	if(strcmp(names[j],names[j+1])>0)
    	{
           strcpy(tem,names[j]);
           strcpy(names[j],names[j+1]);
           strcpy(names[j+1],tem);

    	}
    }
 }
   	  printf("the sorted names are : \n");

   for(i=0;i<n;i++)
   {
      printf("%s\n",names[i]);
   }

}