#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char key;
	int count=0;
	//getting string from user
	
			printf("===============================\n");

	printf("enter the string : ");
	gets(str); //to get the string
	
		printf("===============================\n");

	//get the key that you want to search 
	
		printf("enter the key that you want to search : ");
    scanf("%c",&key);
	
	// to check the ocurring of that key
	
	for(int i=0;str[i]!='\0';i++)  //string ends with the null character '\0'
	{
	  if(key == str[i])
	  {
		 count++ ;
	  }
	}
			printf("===============================\n");

		printf("'%c' occurs %d times in \"%s\" \n",key,count,str);

	return 0;
}