#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{ 
   char s[21];
   int l,i;
   int k=1;
 printf("enter the string you want to check : ");
 gets(s);
 l=strlen(s);

 for(i=0;i<l/2;i++)
 {
	if(s[i]!=s[l-k])
	{
      printf("entered string is not a palindrome \n");
      goto end;
	}
k++;

 }
 
 	 printf("entered string is palindrome \n");

end:
return 0;
}
